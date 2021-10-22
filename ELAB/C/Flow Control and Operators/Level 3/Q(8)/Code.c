#include <stdio.h>
#include <math.h>
int main()
{
    int Px,Py,Pz,Qx,Qy,Qz,dx,dy,dz,sx,sy,sz,r;
    double Ax,Ay,Az,Bx,By,Bz,a,b,c,T;
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d",&Px,&Py,&Pz,&Qx,&Qy,&Qz,&dx,&dy,&dz,&sx,&sy,&sz,&r);
    Ax=Qx-Px;
    Ay=Qy-Py;
    Az=Qz-Pz;
	Bx=sx-Px;
	By=sy-Py;
	Bz=sz-Pz;
    a=pow(Bz*dy-By*dz,2)+pow(Bx*dz-Bz*dx,2)+pow(By*dx-Bx*dy,2)-r*r*(dx*dx+dy*dy+dz*dz);
    b=2*(Bz*Bz*(Ay*dy+Ax*dx)+Bx*Bx*(Az*dz+Ay*dy)+By*By*(Ax*dx+Az*dz)-(By*Bz*(Az*dy+Ay*dz)+Bz*Bx*(Ax*dz+Az*dx)+Bx*By*(Ay*dx+Ax*dy))-r*r*(Ax*dx+Ay*dy+Az*dz));
    c=pow(By*Az-Bz*Ay,2)+pow(Bz*Ax-Bx*Az,2)+pow(Bx*Ay-By*Ax,2)-r*r*(Ax*Ax+Ay*Ay+Az*Az);
	double D=b*b-4*a*c;
    if(-1*b>sqrt(D))\
		T=(-1*b-sqrt(D))/(2*a);
	else
		T=(-1*b+sqrt(D))/(2*a);
	printf("%.10lf", T);
    return 0;
}