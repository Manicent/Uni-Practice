#include <stdio.h>
#include <math.h>
int main()
{
    int D,Oc,Of,Od,Fs,Fb,Fm,Fd;
    float Ocost, Fcost;
    scanf("%d%d%d%d%d%d%d%d", &D, &Oc, &Of, &Od, &Fs, &Fb, &Fm, &Fd);
    Ocost=Oc+(D-Of)>0?(D-Of)*Od:0;
    Fcost=Fb+D*Fd;
    if(Ocost<Fcost)
        printf("OLA Taxi");
    else if(Ocost==Fcost)
        printf("OLA Taxi");
    else
        printf("Fastrack Taxi");
    return 0;
}