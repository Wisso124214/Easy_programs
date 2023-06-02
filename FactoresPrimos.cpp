//Luis Bustos. 09.06.2022
//Descomposicion en factores primos

#include <stdio.h>

unsigned int long n;
int primobit, primo, primos, flag1, flag2, i, j, k, l, m, cprimo[11], primos_[11], div, mod;

int sig_primo(int primo);
int divisible(int n,int primo);
int esprimo(int n);

main(){
	
	printf("Introduzca numero a calcular los factores primos: ");
	scanf("%d",&n);
	
	do{
	
		if(k==n)
			primo=2;
		else
			primo=sig_primo(primo);
		
		div=divisible(n,primo);
		
		if(div){
			primos_[l]=primo;
			l++;
			do{
				n=n/primo;
				
				div=divisible(n,primo);
				cprimo[l]++;
			}while(div==1);
		}
		
		primobit=esprimo(n);
	
	}while(primobit==0);

	for(m=0;m<11;m++){
		printf("%d/t",primos_[m]);
	}
	printf("n");

	for(m=0;m<11;m++){
		printf("%d/t",cprimo[m]);
	}
	printf("n");
	
	return 0;
}

int esprimo(int n){
	
	for(i=(n-1);i>1;i--){
		j = n%i;
		
		if (j==0){
			flag2=0;
		}else {
			flag2=1;
		}
		
		if(flag2<flag1){
			flag1=flag2;
		}
	}
		
	if (flag1==0){
		primobit=0;  	// 1 si es primo, 0 si no es primo
	}
	if (flag1==1){
		primobit=1;
	}
	
	return primobit;
}

int sig_primo(int primo){
	
	do{
	
		flag1=5;

		for(i=(primo-1);i>1;i--){
			j = primo%i;
			
			if (j==0){
				flag2=0;
			}else {
				flag2=1;
			}
			
			if(flag2<flag1){
				flag1=flag2;
			}
		}

		if (flag1==1){
			primos++;
		}
		primo++;
	}while(primos<1);
	
	return primo-1;
}

int divisible(int n, int primo){

	mod=n%primo;
	
	if(!mod)
		div=1;
	else
		div=0;
	
	return div;
}