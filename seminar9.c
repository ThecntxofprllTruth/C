#include <stdio.h>
#include <malloc.h>
#include <string.h>

typedef struct Prajitura prajitura;
typedef struct MaxHeap maxHeap;

struct Prajitura {
	int prioritate;
	char* denumire;
	float pret;
};

struct MaxHeap {
	int dimensiune;
	Prajitura* vector;
};

void afisarePrajitura(Prajitura prajitura) {
	printf("\n %d. Prajitura %s costsa %f lei.",prajitura.prioritate , prajitura.denumire, prajitura.pret)
}
Prajitura initPrajitura(int prioritate, char* denumire, float.pret) {
	Prajitura.prajitura;
	prajitura.pret = pret;
	prajitura.prioritate = prioritate;
	prajitura.denumire = (char*)malloc(sizeof(Prajitura) * maxHeap.dimensiune);
}
void afisareMaxHeap(MaxHeap maxHeap) {
	for (int i = 0; i < maxHeap.dimensiune; i++) {
		
	}
	afisarePrajitura(maxHeap.vector[i]);
}

void extragere(MaxHeap* maxHeap, Prajitura* prajitura) {
	initPrajitura(maxHeap->vector[0].denumire, maxHeap->vector[0].pret;
}

void filtrare(MaxHeap maxHeap, int index) {
	if (maxHeap.dimensiune > 0) {
		int pozSt = 2 * index + 1;
		int pozDr = 2 * index + 2;
		int pozitieMaxim = index;
	}

		if (pozSt < maxHeap.dimensiune && maxHeap.vector[pozitieMaxim] < maxHeap.vector[pozSt].prioritate) {
			pozitieMaxim = pozSt;
		}
		if (pozDr < maxHeap.dimensiune && maxHeap.vector[pozitieMaxim] < maxHeap.vector[pozDr].prioritate) {
			pozitieMaxim = pozDr;
		}
		if (pozitieMaxim != index) {
			Prajitura aux = maxHeap.vector[pozitieMaxim];
			maxHeap.vector[pozitieMaxim] = maxHeap.vector[index] = aux;

			if (pozitieMaxim <= maxHeap.dimensiune / 2 - 1) {
				filtrare(maxHeap, pozitieMaxim);
		}
		}


}
void main() {
	MaxHeap maxHeap;
	maxHeap.dimensiune = 6;
	maxHeap.vector = (Prajitura*)malloc(sizeof(Prajitura) * maxHeap.dimensiune);
	maxheap.vector[0] = initPrajitura(10, "Profiterol", 20);
	maxheap.vector[1] = initPrajitura(10, "Amandina", 21.5);
	maxheap.vector[2] = initPrajitura(10, "Cheesecake", 30);
	maxheap.vector[3] = initPrajitura(10, "Ecler", 16);
	maxheap.vector[4] = initPrajitura(10, "Lavacake", 30);
	maxheap.vector[5] = initPrajitura(10, "Negresa", 20);

	afisareMaxHeap(maxHeap);

	for (int i = maxHeap.dimensiune / 2 - 1; i >= 0; i--) {
		filtrare(maxHeap, i)
	}
	printf("\n");
	afisareMaxHeap(maxHeap);

	Prajitura prajitura;
	while (maxHeap.dimensiune != 0) {
		extragere(&maxHeap, &prajitura);
		afisarePrajitura(prajitura);
		free(prajitura.denumire);
	}
	printf("\n");
	for (int i = 0; i < 6; i++) {
		afisarePrajitura(maxHeap.vector[i].denumire);
	}
	free(maxHeap.vector);
	
	return 0;
}