
CXX=g++
CXXFLAGS=-g -fPIC `root-config --cflags`
LDFLAGS=`root-config --ldflags`
LIBS=`root-config --libs`

all: libNuMIFlux.so run_numiflux

clean:
	rm *.o *.so

FluxNtuple.o: FluggNtuple/FluxNtuple.C FluggNtuple/FluxNtuple.h
	$(CXX) -c $(CXXFLAGS) -o $@ $<

NuMIFlux.o: NuMIFlux.cc NuMIFlux.hh
	$(CXX) -c $(CXXFLAGS) -o $@ $<

libNuMIFlux.so: FluxNtuple.o NuMIFlux.o
	$(CXX) -shared $(LDFLAGS)  -o $@ $^ $(LIBS)

run_numiflux: run_numiflux.cc libNuMIFlux.so 
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $< -o $@ libNuMIFlux.so $(LIBS)
