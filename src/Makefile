CXX = g++
CXXFLAGS = -g
INCS = -I./
OBJS = Addition.o 
VERSION = 1.0.0.alpha.`date +'%y%m%d%H%M%S'`

basicmath: BasicMath.cpp $(OBJS)
	$(CXX) $(CXXFLAGS) -o basicmath BasicMath.cpp $(OBJS)

.cpp.o:
	$(CXX) $(CXXFLAGS) -c $< -o $@ $(INCS)

package: basicmath  
	mkdir -p packaging/basicmath/DEBIAN
	mkdir -p packaging/basicmath/usr/bin
	cp control packaging/basicmath/DEBIAN/
	sed -i'' "s/#VERSION#/$(VERSION)/" packaging/basicmath/DEBIAN/control
	cp basicmath packaging/basicmath/usr/bin/
	dpkg-deb --build packaging/basicmath
	mv packaging/basicmath.deb basicmath_$(VERSION)_amd64.deb

clean:
	-rm -rf *.o 
	-rm -rf basicmath 
	-rm -rf *.deb
	-rm -rf packaging
