double potencia(double x, double y){
  double resultado=1;
  printf("ingrese el valor a elevar ");
  scanf("%lf", &x);
  printf("ingrese el valor de la potencia ");
  scanf("%lf", &y);
  for(int i=0; i<y; i++){
    resultado*=x;
  }
  printf("El resultado de elevar %.2lf a %.2lf = %.2lf\n",x,y,resultado);
  return resultado;
}

double multiplicatoria(double numeros[100]){
  double multiplicatoria=1;
  int n;
  printf("ingrese la cantidad de numeros a multiplicar: ");
  scanf("%d",&n);
  for (int i = 0; i < n; i++) {
        printf("Ingrese el número %d: ", i+1);
        scanf("%lf", &numeros[i]);
        multiplicatoria *= numeros[i];
    }
  printf("La multiplicatoria es: %.2lf\n", multiplicatoria);
}

double sumatoria(double numeros[100]){
  double sumatoria;
  int n;
  printf("ingrese la cantidad de numeros a sumar: ");
  scanf("%d",&n);
  for (int i = 0; i < n; i++) {
        printf("Ingrese el número %d: ", i+1);
        scanf("%lf", &numeros[i]);
        sumatoria += numeros[i];
    }
  printf("La multiplicatoria es: %.2lf\n", sumatoria);
}
