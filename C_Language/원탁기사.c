#include <stdio.h>

#define MANS 777

int knight[MANS] = { 0, };

void setStd(int *std) {
	if (*std + 1 >= MANS)
		*std = 0;
	else
		++*std;
	if (knight[*std] == 1) {
		while (knight[*std] == 1) {
			if (*std + 1 >= MANS)
				*std = 0;
			else
				++*std;
		}
	}
}

void main() {
	int livingPerson = MANS;
	int std = 0;
	int killed = 0;
	while (livingPerson > 1) {
		killed = 0;
		setStd(&std);
		if (killed == 0) {
			setStd(&std);
			knight[std] = 1;
			killed = 1;
			livingPerson--;
		}
	}
	int i;
	for (i = 0; knight[i] != 0; i++);
	printf("%d", i + 1);
}