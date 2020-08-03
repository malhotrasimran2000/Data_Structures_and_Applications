#include<stdio.h>
#include<math.h>
void getData(double*p,double*q,double*r){
printf("Enter the coefficient of x^2,x and the constant term");
scanf("%lf%lf%lf",p,q,r);
}
 void findRoots(double a,double b,double c,double D,double*x,double*y){
 	int k;
 	double im;
 	if(D==0)
 		k=1;
 	else if(D>0)
 		k=2;
 	else
 		k=3;
 	    
 	    
 switch(k){
 	     case 1:
 	        *x=(-b/2*a);
 	        *y=(-b/2*a);
 	        break;
 	     case 2:
 	         *x=(-b+sqrt(D))/(2*a);
 	         *y=(-b-sqrt(D))/(2*a);
 	         break;

 	     case 3:
 	        im=sqrt(-D)/(2*a);
 	        *x=(-b/2*a);
 	        *y=im;
 	        break;
 	    }
 }
void printRoots(double D,double*X,double*Y){
	if(D==0){
		printf("Roots are :\n");
		printf("%lf and %lf",*X,*Y);
	}
	else if(D>0){
		printf("Roots are :\n");
		printf("%lf and %lf",*X,*Y);
	}
	else{
		printf("Roots are :\n");
		printf("%lf+%lfi and %lf-%lfi",*X,*Y,*X,*Y);
	}

}


int main(){
	double a,b,c,r1,r2;
	getData(&a,&b,&c);
	double D=(b*b)-(4*a*c);
    findRoots(a,b,c,D,&r1,&r2);
    printRoots(D,&r1,&r2);
    
}