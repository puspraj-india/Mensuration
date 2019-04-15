// COMOUTER PROJECT WORK ON TOPIC MENSURATION

//Header Files used

#include <iostream.h>
#include <conio.h>
#include <math.h>
#define  pi 3.14
//ALL FUNCTIONS ARE USER DEFINED
/**** HERE

          v       suffix is for volume
          d       suffix is for diagonal
          s       suffix is for slant height
          ar      suffix is used for area
          pe      suffix is for perimeter
          sa      suffix is for surface area
          tsa     suffix is for total surface area
          csa     suffix is for curved surface area
          icsa    suffix is for inner curved surface area
          ecsa    suffix is for outer curved surface aea           ARE USED****/

//ALL THE PARAMETERS ARE TAKEN IN FLOAT FOR ACCURATE CALCULATION
float arsquare(float a);
float pesquare(float a);
float arcircle(float a) ;
float pecircle(float a)  ;
float perectangle(float a,float b);
float arrectangle(float a,float b);
float artriangle(float a,float b);
float petriangle(float a,float b,float c);
float arrhombus(float a,float b);
float perhombus(float a);
float artrapazium(float a,float b,float c);
float petrapazium(float a,float b,float c,float d);
float arparallelogram(float a,float b);
float peparallelogram(float a,float b);
float areqtriangle(float a);
float peeqtriangle(float a);
float cuberoot(float a);
float squareroot(float a);
float power(float a,float b);
float tsacube(float a);
float csacube(float a);
float vcube(float a);
float dcube(float a);
float tsacuboid(float a,float b,float c);
float csacuboid(float a,float b,float c);
float vcuboid(float a,float b,float c);
float dcuboid(float a,float b,float c);
float tsasphere(float a);
float vsphere(float a);
float tsahemi_sphere(float a);
float csahemi_sphere(float a);
float vhemi_sphere(float a);
float tsacylinder(float a,float b);
float csacylinder(float a,float b);
float vcylinder(float a,float b);
float tsahcylinder(float w,float x,float y);
float ecsahcylinder(float w,float y);
float icsahcylinder( float x,float y);
float sahcylinder(float w,float x);
float vhcylinder(float w,float x,float y);
float tsacone(float ae,float ag);
float csacone(float ae,float ag);
float vcone(float ae,float af);
float scone(float ae,float af);
float tsafrustum(float R,float r,float l);
float csafrustum(float R,float r,float l);
float vfrustum(float R,float r,float h);

char A;
  void main ()
{
int a1,a2,a3,a4,a5;
float csa,tsa,vof,ur,ir,nh,sh;


            cout<<"\n\t\t\t      ________________________________     ";
            cout<<"\n\t\t\t      ____________WELCOME_____________     ";
            cout<<"\n\t\t\t   |  $    COMPUTER PROJECT WORK  $       |";
            cout<<"\n\t\t\t   |    TOPIC -: MENSURATION      |";
            cout<<"\n\t\t\t   |    PREPARED BY -:                    |";
            cout<<"\n\t\t\t   |         PUSPRAJ JAISWAL        |";
do{         cout<<"\n\t\t\t      ________________________________     ";

 MAIN :
cout<<"\n\n\nPRESS 1 FOR TWO DIMENSION\t";
cout<<"\n\n\nPRESS 2 FOR THREE DIMENSION\t";
cin>>a1;
clrscr();
switch (a1)
{

 case 1:
 FIRST :
          cout<<"\n\n\t\apress 1 for square\t";
          cout<<"\n\n\tpress 2 for circle\t";
          cout<<"\n\n\tpress 3 for rectangle";
          cout<<"\n\n\tpress 4 for trianle\t";
          cout<<"\n\n\tpress 5 for rhombus\t";
          cout<<"\n\n\tpress 6 for trapazium\t";
          cout<<"\n\n\tpress 7 for paralellogram\t";
          cout<<"\n\n\tpress 8 for equilateral triangle\t";
          cout<<"\n\n\n\t\t\tENTER YOUR CHOICE\t";
          cin>>a2;
          clrscr();
  switch (a2)
  { float b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,aa,ab,ac,ad,ae,af,ag;
 float ah,ai,aj,ak,al,am,an,ao,ap,ar;

    case 1 :
   cout<<"\n\n\aenter the side of square\t";
   cin>>b;
   c=arsquare(b);
   d=pesquare(b);
   cout<<"\n\n\athe area of the square is :\t"<<c<<"\tand perimeter is :\t"<<d;
   cout<<"\n\npress 1 to goto main menu\t";
   cout<<"\n\npress 2 to goto 2 Dimensional menu\t";
   cout<<"\n\nPress 3 to goto 3 Dimensional menu\t";
   cout<<"\n\nPress 4 to exit\t";
   cin>>ar;
   if(ar==1)
    goto MAIN;
   else if (ar==2)
   goto FIRST;
   else if(ar==3)
   goto SECOND;
   else
   goto EXIT;
   break;
   case 2 :
   cout<<"\n\n\aenter the radius of the circle\t";
   cin>>e;
   f=arcircle(e);
   g=pecircle(e);
   cout<<"\n\n\athe area of the circle is :\t"<<f<<"\tand perimeter is :\t"<<g;
   cout<<"\n\npress 1 to goto main menu\t";
   cout<<"\n\npress 2 to goto 2 Dimensional menu\t";
   cout<<"\n\nPress 3 to goto 3 Dimensional menu\t";
   cout<<"\n\nPress 4 to exit\t";
   cin>>ar;
   if(ar==1)
    goto MAIN;
   else if (ar==2)
   goto FIRST;
   else if(ar==3)
   goto SECOND;
   else
   goto EXIT;
   break;
   case 3 :
   cout<<"\n\n\aenter the length and breadth of the rectangle\t";
   cin>>h>>i;
   j=arrectangle(h,i);
   k=perectangle(h,i);
   cout<<"\n\n\athe area of the rectangle is :\t"<<j<<"\tand perimeter is :\t"<<k;
   cout<<"\n\npress 1 to goto main menu\t";
   cout<<"\n\npress 2 to goto 2 Dimensional menu\t";
   cout<<"\n\nPress 3 to goto 3 Dimensional menu\t";
   cout<<"\n\nPress 4 to exit\t";
   cin>>ar;
   clrscr();
   if(ar==1)
    goto MAIN;
   else if (ar==2)
   goto FIRST;
   else if(ar==3)
   goto SECOND;
   else
   goto EXIT;
   break;
   case 4 :
   cout<<"\n\n\aenter the height base of the triangle\t";
   cin>>l>>m;
   cout<<"\n\n\aenter all the sides of the triangle\t";
   cin>>ah>>ai>>aj;
   n=artriangle(l,m);
   o=petriangle(ah,ai,aj);
   cout<<"\n\n\athe area of the triangle is :\t"<<n<<"\tand perimeter is :\t"<<o;
   cout<<"\n\npress 1 to goto main menu\t";
   cout<<"\n\npress 2 to goto 2 Dimensional menu\t";
   cout<<"\n\nPress 3 to goto 3 Dimensional menu\t";
   cout<<"\n\nPress 4 to exit\t";
   cin>>ar;
   clrscr();
   if(ar==1)
    goto MAIN;
   else if (ar==2)
   goto FIRST;
   else if(ar==3)
   goto SECOND;
   else
   goto EXIT;
   break;
   case 5 :
   cout<<"\n\n\aenter the two diagonals and the side of the rhombus\t";
   cin>>p>>q>>r;
   s=arrhombus(p,q);
   t=perhombus(r);
   cout<<"\n\n\athe area of the rhombus is :\t"<<s<<"\tand permeter is :\t"<<t;
   cout<<"\n\npress 1 to goto main menu\t";
   cout<<"\n\npress 2 to goto 2 Dimensional menu\t";
   cout<<"\n\nPress 3 to goto 3 Dimensional menu\t";
   cout<<"\n\nPress 4 to exit\t";
   cin>>ar;
   clrscr();
   if(ar==1)
    goto MAIN;
   else if (ar==2)
   goto FIRST;
   else if(ar==3)
   goto SECOND;
   else
   goto EXIT;
   break;
   case 6 :
   cout<<"\n\n\aenter the paralell sides and the perpendicular height of trapazium\t";
   cin>>u>>v>>ak;
   cout<<"\n\n\aenter the remaining two sides of the trapazium\t";
   cin>>al>>am;
   y=artrapazium(u,v,ak);
   z=petrapazium(u,v,al,am);
   cout<<"\n\n\athe area of the trapazium is :\t"<<y<<"\tand perimeter is :\t"<<z;
   cout<<"\n\npress 1 to goto main menu\t";
   cout<<"\n\npress 2 to goto 2 Dimensional menu\t";
   cout<<"\n\nPress 3 to goto 3 Dimensional menu\t";
   cout<<"\n\nPress 4 to exit\t";
   cin>>ar;
   clrscr();
   if(ar==1)
    goto MAIN;
   else if (ar==2)
   goto FIRST;
   else if(ar==3)
   goto SECOND;
   else
   goto EXIT;
   break;
   case 7 :
   cout<<"\n\n\aenter the base and perpendicular height of the parallelogram\t";
   cin>>aa>>ab;
   cout<<"\n\n\aenter the width of the parallelogram\t";
   cin>>an;
   ac=arparallelogram(aa,ab);
   ad=peparallelogram(aa,an);
   cout<<"\n\n\athe area of the ||gm is :\t"<<ac<<"\tand preimeter is :\t"<<ad;
   cout<<"\n\npress 1 to goto main menu\t";
   cout<<"\n\npress 2 to goto 2 Dimensional menu\t";
   cout<<"\n\nPress 3 to goto 3 Dimensional menu\t";
   cout<<"\n\nPress 4 to exit\t";
   cin>>ar;
   clrscr();
   if(ar==1)
    goto MAIN;
   else if (ar==2)
   goto FIRST;
   else if(ar==3)
   goto SECOND;
   else
   goto EXIT;
   break;
   case 8 :
   cout<<"\n\n\aenter the side of the equilateral triangle\t";
   cin>>ao;
   ap=areqtriangle(ao);
   ar=peeqtriangle(ao);
   cout<<"\n\n\athe area of the equilateral triangle is :\t"<<ap<<"\tand perimeter is :\t"<<ao;
   cout<<"\n\npress 1 to goto main menu\t";
   cout<<"\n\npress 2 to goto 2 Dimensional menu\t";
   cout<<"\n\nPress 3 to goto 3 Dimensional menu\t";
   cout<<"\n\nPress 4 to exit\t";
   cin>>ar;
   clrscr();
   if(ar==1)
    goto MAIN;
   else if (ar==2)
   goto FIRST;
   else if(ar==3)
   goto SECOND;
   else
   goto EXIT;
   break;
   default :
   cout<<"\n\n\aentered wrong choice\t";
   cout<<"\n\npress 1 to goto main menu\t";
   cout<<"\n\npress 2 to goto 2 Dimensional menu\t";
   cout<<"\n\nPress 3 to goto 3 Dimensional menu\t";
   cout<<"\n\nPress 4 to exit\t";
   cin>>ar;
   clrscr();
   if(ar==1)
    goto MAIN;
   else if (ar==2)
   goto FIRST;
   else if(ar==3)
   goto SECOND;
   else
   goto EXIT;
   break;
   }
   break;
   case 2 :
   SECOND :
   float b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z;
   float aa,ab,ac,ad,ae,af,ag,ah,ai,aj,ak,al,am,an,ao,ap,ar,as,at,au,av,aw,ax;


     cout<<"\n\n\t\apress 1 for cube";
     cout<<"\n\n\tpress 2 for cuboid";
     cout<<"\n\n\tpress 3 for sphere";
     cout<<"\n\n\tpress 4 for hemi-sphere";
     cout<<"\n\n\tpress 5 for cylinder";
     cout<<"\n\n\tpress 6 for hollow cylinder";
     cout<<"\n\n\tpress 7 for cone";
     cout<<"\n\n\tpress 8 for frustum";
     cout<<"\n\n\n\t\t\tENTER YOUR CHOICE\t";
     cin>>a2;
     clrscr();
    switch (a2)
   {
     case 1 :
     cout<<"\n\n\aenter the height of the cube\t";
     cin>>ax;
     b=tsacube(ax);
     c=csacube(ax);
     d=vcube(ax);
     ak=dcube(ax);
     cout<<"\n\n\athe total surface area of the cube is :\t"<<b;
     cout<<"\n\n\athe curved surface area of the cube is :\t"<<c;
     cout<<"\n\n\athe volume of the cube is :\t"<<d;
     cout<<"\n\n\t\adiagonal of the cube\t"<<ak;
     cout<<"\n\npress 1 to goto main menu\t";
   cout<<"\n\npress 2 to goto 2 Dimensional menu\t";
   cout<<"\n\nPress 3 to goto 3 Dimensional menu\t";
   cout<<"\n\nPress 4 to exit\t";
   cin>>ar;
   clrscr();
   if(ar==1)
    goto MAIN;
   else if (ar==2)
   goto FIRST;
   else if(ar==3)
   goto SECOND;
   else
   goto EXIT;
     break;
     case 2 :
     cout<<"\n\n\tenter the length breadth and height of the cuboid\t";
     cin>>e>>f>>g;
     h=tsacuboid(e,f,g);
     i=csacuboid(e,f,g);
     j=vcuboid(e,f,g);
     al=dcuboid(e,f,g);
     cout<<"\n\n\t\athe total surface area of the cuboid is :\t"<<h;
     cout<<"\n\n\t\athe curved surface area of the cuboid is :\t"<<i;
     cout<<"\n\n\t\athe volume of the cuboid is :\t"<<j;
     cout<<"\n\n\t\athe diagonal of the cuboid is\t"<<al;
     cout<<"\n\npress 1 to goto main menu\t";
   cout<<"\n\npress 2 to goto 2 Dimensional menu\t";
   cout<<"\n\nPress 3 to goto 3 Dimensional menu\t";
   cout<<"\n\nPress 4 to exit\t";
   cin>>ar;
   clrscr();
   if(ar==1)
    goto MAIN;
   else if (ar==2)
   goto FIRST;
   else if(ar==3)
   goto SECOND;
   else
   goto EXIT;
     break;
     case 3 :
     cout<<"\n\n\t\aenter the radius of the sphere\t";
     cin>>k;
     l=tsasphere(k);
     m=vsphere(k);
     cout<<"\n\n\t\athe total surface area of the sphere is\t"<<l;
     cout<<"\n\n\t\athe volume of the sphere is\t"<<m;
     cout<<"\n\npress 1 to goto main menu\t";
   cout<<"\n\npress 2 to goto 2 Dimensional menu\t";
   cout<<"\n\nPress 3 to goto 3 Dimensional menu\t";
   cout<<"\n\nPress 4 to exit\t";
   cin>>ar;
   clrscr();
   if(ar==1)
    goto MAIN;
   else if (ar==2)
   goto FIRST;
   else if(ar==3)
   goto SECOND;
   else
   goto EXIT;
     break;
     case 4 :
     cout<<"\n\n\t\aenter the radius of the hemi-sphere\t";
     cin>>n;
     o=tsahemi_sphere(n);
     p=csahemi_sphere(n);
     q=vhemi_sphere(n);
     cout<<"\n\n\t\athe total surface area of the hemi-sphere is\t"<<o;
     cout<<"\n\n\t\athe curved surface area of the hemi-sphere is\t"<<p;
     cout<<"\n\n\t\athe volume of the hemi-sphere is\t"<<q;
     cout<<"\n\npress 1 to goto main menu\t";
   cout<<"\n\npress 2 to goto 2 Dimensional menu\t";
   cout<<"\n\nPress 3 to goto 3 Dimensional menu\t";
   cout<<"\n\nPress 4 to exit\t";
   cin>>ar;
   clrscr();
   if(ar==1)
    goto MAIN;
   else if (ar==2)
   goto FIRST;
   else if(ar==3)
   goto SECOND;
   else
   goto EXIT;
     break;
     case 5 :
     cout<<"\n\n\t\aenter the radius and the height of the cylinder\t";
     cin>>r>>s;
     t=tsacylinder(r,s);
     u=csacylinder(r,s);
     v=vcylinder(r,s);
     cout<<"\n\n\t\athe total surface area of the cylinder is\t"<<t;
     cout<<"\n\n\t\athe curved surface area of the cylinder is\t"<<u;
     cout<<"\n\n\t\athe volume of the cylinder\t"<<v;
     cout<<"\n\npress 1 to goto main menu\t";
   cout<<"\n\npress 2 to goto 2 Dimensional menu\t";
   cout<<"\n\nPress 3 to goto 3 Dimensional menu\t";
   cout<<"\n\nPress 4 to exit\t";
   cin>>ar;
   clrscr();
   if(ar==1)
    goto MAIN;
   else if (ar==2)
   goto FIRST;
   else if(ar==3)
   goto SECOND;
   else
   goto EXIT;
     break;
     case 6 :
     cout<<"\n\n\t\aenter the external and internal radius of the hollow cylinder\t";
     cin>>w>>x;
     cout<<"\n\n\t\aenter the height of the hollow cylinder\t";
     cin>>y;
     z=tsahcylinder(w,x,y);
     aa=ecsahcylinder(w,y);
     ab=icsahcylinder(x,y);
     ac=sahcylinder(w,x);
     ad=vhcylinder(w,x,y);
     cout<<"\n\n\t\athe total surface area of the hollow cylinder is"<<z;
     cout<<"\n\n\t\athe external curved surface area of the hollow cylinder is\t"<<aa;
     cout<<"\n\n\t\athe internal curved surface area of the hollow cylinder is\t"<<ab;
     cout<<"\n\n\t\athe cross sectional area of the hollow cylinder is\t"<<ac;
     cout<<"\n\n\t\athe volume of the cylinder is\t"<<ad;
     cout<<"\n\npress 1 to goto main menu\t";
   cout<<"\n\npress 2 to goto 2 Dimensional menu\t";
   cout<<"\n\nPress 3 to goto 3 Dimensional menu\t";
   cout<<"\n\nPress 4 to exit\t";
   cin>>ar;
   clrscr();
   if(ar==1)
    goto MAIN;
   else if (ar==2)
   goto FIRST;
   else if(ar==3)
   goto SECOND;
   else
   goto EXIT;
     break;
     case 7 :
     cout<<"\n\n\t\aenter the radius and the height of the cone\t";
     cin>>ae>>af;
     ag=scone(ae,af);
     cout<<"\n\n\t\aslant height =\t"<<ag;
     ah=tsacone(ae,ag);
     ai=csacone(ae,ag);
     aj=vcone(ae,af);
     cout<<"\n\n\t\atotal surface area of cone is\t"<<ah;
     cout<<"\n\n\t\acurved surface area of the cone is\t"<<ai;
     cout<<"\n\n\t\avolume of the cone is\t"<<aj;
     cout<<"\n\npress 1 to goto main menu\t";
   cout<<"\n\npress 2 to goto 2 Dimensional menu\t";
   cout<<"\n\nPress 3 to goto 3 Dimensional menu\t";
   cout<<"\n\nPress 4 to exit\t";
   cin>>ar;
   clrscr();
   if(ar==1)
    goto MAIN;
   else if (ar==2)
   goto FIRST;
   else if(ar==3)
   goto SECOND;
   else
   goto EXIT;
     break;
     case 8 :
     cout<<"\n\n\t\a Enter the outer radius of the frustum \t";
     cin>>ur;
     cout<<"\n\n\aEnter the inner radius of the Frustum\t";
     cin>>ir;
     cout<<"\n\n\aEnter the slant height of the frustum\t";
     cin>>sh;
     cout<<"\n\n\aEnter the hight of the frustum\t";
     cin>>nh;
     tsa =tsafrustum(ur,ir,sh);
     csa =csafrustum(ur,ir,sh);
     vof =vfrustum(ur,ir,nh);
      cout<<"\n\n\t\atotal surface area of frustum is\t"<<tsa;
     cout<<"\n\n\t\acurved surface area of the frustum is\t"<<csa;
     cout<<"\n\n\t\avolume of the frustum is\t"<<vof;
     cout<<"\n\npress 1 to goto main menu\t";
   cout<<"\n\npress 2 to goto 2 Dimensional menu\t";
   cout<<"\n\nPress 3 to goto 3 Dimensional menu\t";
   cout<<"\n\nPress 4 to exit\t";
   cin>>ar;
   clrscr();
   if(ar==1)
    goto MAIN;
   else if (ar==2)
   goto FIRST;
   else if(ar==3)
   goto SECOND;
   else
   goto EXIT;
     break;
     default :
     cout<<"\n\n\t\aentered wrong choice\t";
     cout<<"\n\npress 1 to goto main menu\t";
   cout<<"\n\npress 2 to goto 2 Dimensional menu\t";
   cout<<"\n\nPress 3 to goto 3 Dimensional menu\t";
   cout<<"\n\nPress 4 to exit\t";
   cin>>ar;
   clrscr();
   if(ar==1)
    goto MAIN;
   else if (ar==2)
   goto FIRST;
   else if(ar==3)
   goto SECOND;
   else
   goto EXIT;
     break;

     }
     break;
     default :
     cout<<"\n\n\t\aentered wrong choice\t";
     cout<<"\n\npress 1 to goto main menu\t";
   cout<<"\n\npress 2 to goto 2 Dimensional menu\t";
   cout<<"\n\nPress 3 to goto 3 Dimensional menu\t";
   cout<<"\n\nPress 4 to exit\t";
   cin>>ar;
   clrscr();
   if(ar==1)
    goto MAIN;
   else if (ar==2)
   goto FIRST;
   else if(ar==3)
   goto SECOND;
   else
   goto EXIT;
     break;
     }

   cout<<"\n\n\t\apress (Y/y) for continue and (N/n) to exit\t";
   cin>>A;
   clrscr();
  }while(A=='y'||A=='Y');
  EXIT :
  getch ();
  }
  float arsquare(float a)
   {float b=a*a;
   return(b);
   }
float pesquare(float a)
   {float b=4.0*a;
    return(b);
    }
float arcircle(float a)
  {float b=pi*a*a;
    return(b);
    }
float pecircle(float a)
 { float b=2.0*pi*a;
  return(b);
  }
float perectangle(float a,float b)
{float c=2.0*(a+b);
 return(c);
 }
float arrectangle(float a,float b)
{ float c=a*b;
 return(c);
 }
float artriangle(float a,float b)
{float c=1/2.0*a*b;
 return c;}
float petriangle(float a,float b,float c)
{float e=a+b+c;
 return(e);}
float arrhombus(float a,float b)
{float c=1/2.0*a*b;
 return(c);}
float perhombus(float a)
{float b=4*a;
 return(b);}
float artrapazium(float a,float b,float c)
 {
float d=1/2.0*(a+b)*c;
return(d);    }
float petrapazium(float a,float b,float c,float d)
{float e=a+b+c+d;
return(e);
}
float arparallelogram(float a,float b)
{float c=1/2.0*a*b;
return(c);}
float peparallelogram(float a,float b)
{
float c=2*(a+b);
return(c);}
float areqtriangle(float a)
{
float b=cuberoot(3)*a;
return(b);}
float peeqtriangle(float a)
{
float b=(3)*a;
return(b);
}
float cuberoot(float a)
{
float b=pow(a,1/3.0);
return(b);
}
float power(float a,float b)
{
float c=1,i;
 for(i=1;i<=b;i++)
    c*=a;
    return(c);
 }
float tsacube(float a)
{
float b=6.0*a*a;
 return(b);
 }
float csacube(float a)
{
float b=4.0*a*a;
return(b);
}
float vcube(float a)
{
float b=pow(a,3.0);
 return(b);
 }
float dcube(float a)
{
float b=pow(3.0,1/3.0)*a;
 return(b);
 }
float tsacuboid(float a,float b,float c)
{
float d=2.0*(a*b+b*c+c*a);
return(d);
}
float csacuboid(float a,float b,float c)
{
float d=2.0*(a+b)*c;
return(d);
}
float vcuboid(float a,float b,float c)
{
float d=a*b*c;
return(d);
}
float dcuboid(float a,float b,float c)
{
float d=pow((pow(a,2)+pow(b,2)+pow(c,2)),1/2.0);
return(d);
}
float tsasphere(float a)
{
float b=4*pi*a*a;
return(b);
}
float vsphere(float a)
{
float b=4/3.0*pi*a*a*a;
return(b);
}
float tsahemi_sphere(float a)
{
float b=3.0*pi*a*a;
return(b);
}
float csahemi_sphere(float a)
{
float b=2.0*pi*a*a;
return(b);
}
float vhemi_sphere(float a)
{
float b=2/3.0*pi*a*a*a;
return(b);
}
float tsacylinder(float a,float b)
{
float c=2.0*pi*a*(a+b);
return(c);
}
float csacylinder(float a,float b)
{
float c=2.0*pi*a*b;
return(c);
          }
float vcylinder(float a,float b)
{
float c=pi*a*a*b;
return(c);
}
float tsahcylinder(float w,float x,float y)
{
float c=2.0*pi*(w*y+x*y+w*w-x*x);
return(c);
}
float ecsahcylinder(float w,float y)
{
float c=2.0*pi*w*y;
return(c);
}
float icsahcylinder(float x,float y)
{
float c=2.0*pi*x*y;
return(c);
}
float sahcylinder(float w,float x)
{
float c=pi*(w*w-x*x);
return(c);
}
float vhcylinder(float w,float x,float y)
{
float c=pi*(w*w-x*x)*y;
 return(c);
}
float scone(float a,float b)
{
float c;
c=power((pow(a,2.0)+pow(b,2.0)),1/2.0);
return(c);
}
float tsacone(float ae,float ag)
{float c=pi*ae*(ag+ae);
return(c);
}

float csacone(float ae,float ag)
{
float c=pi*ae*ag;
return(c);
}
float vcone(float ae,float af)
{
float c=1/3.0*pi*ae*ae*af;
return(c);
}
float squareroot(float a)
{
float c=pow(a,1/2.0);
return(c);
}
float tsafrustum(float R,float r,float l)
{
float c=pi*((R+r)*l+(R*R+r*r));
return(c);
}
float csafrustum(float R,float r,float l)
{
float c=pi*(R+r)*l;
return c;
}
float vfrustum(float R,float r,float h)
{
float c=1/3.0*pi*(R*R+r*r+R*r)*h;
return c;
}
