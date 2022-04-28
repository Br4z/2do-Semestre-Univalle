CXX = g++

all: build

build:
	$(CXX) -std=c++11 -o main main.cpp  Concursante.cpp Concurso.cpp Presentador.cpp PresentadorAleatorio.cpp PresentadorIdeasFijas.cpp PresentadorLoco.cpp PresentadorTemporal.cpp
# si tiene mas de una implementación (.cpp) debe poner el nombre despues de main.cpp. Ejemplo: 

# $(CXX) -std=c++11 -o main main.cpp persona.cpp 

# donde persona.cpp es otra implementación
run:
	@./main 
