#include <stdio.h>
#include <math.h>
#include <malloc.h>

void AnalyzMassiv(float *x, int n, char q, float **min, float **max);
void VvodMassiv(float *x, int n, char q);

int main()
{
	int n, m, k;
	float* min = 0, * max = 0;
	float *mas = 0;

	printf("Vvedi n\n");
	scanf_s("%i", &n);
	printf("Vvedi m\n");
	scanf_s("%i", &m);
	printf("Vvedi k\n");
	scanf_s("%i", &k);

	float *x = (float*)malloc(n * sizeof(float));
	float* y = (float*)malloc(m * sizeof(float));
	float* z = (float*)malloc(k * sizeof(float));

	VvodMassiv(x, n, 'x');
	VvodMassiv(y, m, 'y');
	VvodMassiv(z, k, 'z');

	AnalyzMassiv(x, n, 'x', &min, &max);
	printf("X max is %f i znahoditca pid nomerom %i\n", *max, max - x);
	printf("X min is %f i znahoditca pid nomerom %i\n", *min, min - x);

	AnalyzMassiv(y, m, 'y', &min, &max);
	printf("Y max is %f i znahoditca pid nomerom %i\n", *max, max - y);
	printf("Y min is %f i znahoditca pid nomerom %i\n", *min, min - y);

	AnalyzMassiv(z, k, 'z', &min, &max);
	printf("Z max is %f i znahoditca pid nomerom %i\n", *max, max - z);
	printf("Z min is %f i znahoditca pid nomerom %i\n", *min, min- z);

}

void VvodMassiv(float *x, int n, char q) {
	for (int i = 0; i < n; i++) {
		printf("Vvedi %c[%i]\n", q, i);
		scanf_s("%f", &x[i]);
	}
}

void AnalyzMassiv(float *x, int n, char q, float** min, float** max) {

	*min = x;
	*max = x;


	for (int i = 0; i < n; i++) {

		if (*(x+i) >= **max) {
			*max = (x + i);
		}
		else if (*(x+1) < **min) {
			*min = (x + i);
		}

	}




}
