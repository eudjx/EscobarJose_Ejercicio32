wave.png : plot.py Ex32.dat
	python plot.py

Ex32.dat : Ex32.x
	./Ex32.x > Ex32.dat

Ex32.x : Ex32.cpp
	c++ Ex32.cpp -o Ex32.x
	
clean:
	rm Ex32.x Ex32.dat 