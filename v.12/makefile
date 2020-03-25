all: artichokes scrolling bitequal

artichokes: artichokes.cc
	g++ -std=c++17 artichokes.cc -lm -o artichokes

scrolling: scrollingsign.cc
	g++ -std=c++17 scrollingsign.cc -lm -o scrolling

bitequal: bitequalizer.cc
	g++ -std=c++17 bitequalizer.cc bitequal

clean:
	del artichokes.exe
	del scrolling.exe
	del bitequalizer.exe
	del *~
