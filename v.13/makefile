all: conformity wertyu

conformity: conformity.cc
	g++ -std=c++17 conformity.cc -lm -o conformity

wertyu: wertyu.cc
	g++ -std=c++17 wertyu.cc -lm -o wertyu

bitequal: wertyu.cc
	g++ -std=c++17 wertyu.cc wertyu

clean:
	del *.exe
	del *~
