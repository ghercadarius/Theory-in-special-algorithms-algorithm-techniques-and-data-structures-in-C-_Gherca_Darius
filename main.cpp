#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <climits>
#include <cmath>
#include <cstring>
using namespace std;
void stergere()
{
    system("cls");
}
/// Pentru fiecare problema am facut o functie care ruleaza programul din enuntul dat, numele functiilor codificand
/// Capitolul, partea si numarul problemei: Prima cifra, numarul capitolului, A doua cifra, numarul Partii din care face parte
/// si A treia cifra, numarul problemei
void p111() ///Problema 1 din Prima parte (Suma cifrelor unui numar) a Primului Capitol (Algoritmi Elementari)
{
    int numar,cifra,suma=0;
    cout<<"Introduceti numarul:"<<"\n"; ///citesc numarul
    cin>>numar;
    while(numar!=0) ///algoritmul de scoatere a cifrelor unui numar;
    {
        cifra=numar%10;
        numar=numar/10;
        suma=suma+cifra;
    }
    stergere();
    cout<<"Suma cifrelor numarului este "<<suma<<"\n"; ///afisarea sumei
}
void p112()
{
    int nr,ogl=0,c;
    cout<<"Numarul dat:"<<"\n"; ///citirea numarului
    cin>>nr;
    while(nr!=0) ///algoritmul de scoatere a cifrelor SI de calculare a oglinditului unui numar
    {
        c=nr%10;
        nr=nr/10;
        ogl=ogl*10+c;
    }
    stergere();
    cout<<"Oglinditul numarului este "<<ogl<<"\n"; ///afisarea oglinditului
}
void p113()
{
    int c,nr,cif=1;
    cout<<"Numarul dat:"<<"\n"; ///citirea numarului
    cin>>nr;
    while(nr!=0 && cif==1)
    {
        c=nr%10;
        if(c%2==0) ///cifrele care sunt pare sunt puse in cif. Cand se schimba valoarea sa se opreste structura
        cif=c;
        nr=nr/10;
    }
    stergere();
    cout<<"Ultima cifra para din numarul dat este "<<cif<<"\n"; ///Afisarea ultimei cifre pare
}
void p114()
{
    int n,c1,c2,c,nr=0,p=1;
    cout<<"Numarul dat:"<<"\n";
    cin>>n;
    cout<<"Cifra c1 care trebuie inlocuita:"<<"\n";
    cin>>c1;
    cout<<"Cifra c2 cu care se inlocuieste:"<<"\n";
    cin>>c2;
    while(n!=0)
    {
        c=n%10;
        if(c==c1)
        c=c2;  ///inlocuim cifrele c1 cu c2
        nr=nr+p*c; ///construirea unui nou numar in care cifrele c1 sunt inlocuite de c2
        p=p*10;
        n=n/10;
    }
    stergere();
    cout<<nr<<"\n"; ///afisarea numarului

}
void p121()
{
    int n,i,x,max=-1; ///initializez maximul cu -1, orice valoare fiind mai mare ca maxim
    cout<<"Numarul de numere citite:"<<"\n";
    cin>>n;
    cout<<"Numerele citite:"<<"\n";
    for(i=1;i<=n;i++)
    {
        cin>>x;
        if(x>max)
        max=x; ///calculez maximul
    }
    stergere();
    cout<<"Numarul maxim din sir este "<<max<<"\n";;
}
void p122()
{
    int n,a,i,x,min=INT_MAX,nrmin,c;/// minimul il initializam cu valoarea maxima posibila, in acest caz folosind libraria climits
    cout<<"Numarul de numere citite: "<<"\n";
    cin>>n;
    cout<<"Numerele ce trebuie citite: "<<"\n";
    for(i=1;i<=n;i++)
    {
        cin>>x;
        a=x; ///facem o copie deoarece, in etapa urmatoare, x isi va pierde valoarea initiala
        while(x>9) ///impartim numarul la 10 pana cand acesta este mai mic ca 10, acea cifra fiind prima lui cifra
        {
            x=x/10;
        }
        if(x<min)
        {
            min=x; ///daca x este mai mic ca minimul pana atunci, actualizam minimul si numarul cu prima cifra minima
            nrmin=a;
        }
    }
    stergere();
    cout<<"Numarul cu prima cifra minima din sirul dat este "<<nrmin<<"\n"; ///afisam numarul cu prima cifra minima
}
void p123()
{
    int n,i,x,max=-1,k;///initializam maximul cu -1 si contorul care numara de cate ori apare acel maxim cu 0
    cout<<"Numarul de numere ce trebuie citite:"<<"\n";
    cin>>n;
    cout<<"Numerele ce trebuie citite:"<<"\n";
    for(i=1;i<=n;i++)
    {
        cin>>x;
        if(x>max)
        {
            max=x; ///daca gasim un numar mai mare decat maximul actual resetam contorul
            k=1;
        }
        else
        if(x==max) ///daca gasim un numar egal cu maximul, marim contorul cu o valoare
        k++;
    }
    stergere();
    if(k==1)
    cout<<"Numarul maxim din sir este "<<max<<" si acesta apare odata"<<"\n";
    else
    if(k>1)
    cout<<"Numarul maxim din sir este "<<max<<" si acesta apare de "<<k<<" ori"<<"\n";
}
void p124()
{
    int n,i,x,max1=-1,max2=-1;///initializam 2 maxime pentru a le modifica in paralel
    cout<<"Numarul de numere care trebuie citite:"<"\n";
    cin>>n;
    cout<<"Numerele care trebuie citite:"<<"\n";
    for(i=1;i<=n;i++)
    {
        cin>>x;
        if(x>max1)
        {
            max2=max1;///cand actualizam max1, max2 ia valoarea veche a lui max1
            max1=x;
        }
        else
        if(x>max2)
        max2=x;///cand gasim un numar mai mic ca max1 dar mai mare ca max2
    }
    stergere();
    cout<<"Cel mai mare numar este "<<max1<<" iar cel de-al doilea cel mai mare numar este "<<max2<<"\n";
}
void p131()
{
    int n,i;
    cout<<"Numarul ce trebuie citit:"<<"\n";
    cin>>n; ///citim numarul caruia vrem sa ii afisam divizorii
    cout<<"Divizorii lui sunt:"<<"\n";
    stergere();
    for(i=1;i<=n;i++)
    if(n%i==0)
    cout<<i<<" ";///daca i este divizorul lui n, atunci il afisam. Altfel, nimic nu se va executa
    cout<<"\n";
}
void p132()
{
    int n,i,j; ///Spre deosebire de cealalta problema ce pare asemanatoare, aici vom folosi o varianta optimizata ce reduce semnificativ timpul de executie
    cout<<"Numarul n:"<<"\n";
    cin>>n;
    int s=0; ///putem initializa variabile si de-a lungul programului, nefiind obligati sa definim toate variabele in primul int
    for(i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            j=n/i;/// vom merge cu i pana la radicalul lui n, intrucat divizorii simetrici dupa radacina patrata a numarului.
            if(i!=j) ///Astfel putem forma perechi de divizori
            s=s+i+j;
            else
            s=s+i;
        }
    }
    stergere();
    cout<<"Suma divizorilor lui este "<<s<<"\n"; ///afisam suma
}
void p133()
{
    int a,b,i,j; ///initializam cele 2 numere cu contorul de numarare corespunzator
    cout<<"Primul numar:"<<"\n";
    cin>>a;
    cout<<"Al doilea numar"<<"\n";
    cin>>b;
    stergere();
    cout<<"Divizorii comuni sunt:"<<"\n";
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            for(j=1;j<=b;j++) ///cand gasim un numar ce e divizor lui a, parcurgem divizorii lui b sa vedem daca este vreun divizor de-al lui b egal cu divizorul lui a
            if(b%j==0)
            {
                if(i==j)
                cout<<i<<" "; ///afisam divizorii
            }
        }
    }
    cout<<"\n";
}
void p134()
{
    int n,i,ogl,c,x,y,r,k=0; ///initializam oglinditul si o copie a numarului
    cout<<"Numarul de numere ce trebuie citite:"<<"\n";
    cin>>n;
    cout<<"Numerele ce trebuie citite:"<<"\n";
    for(i=1;i<=n;i++)
    {
        cin>>x;
        ogl=0;
        y=x;
        while(y!=0)
        {
            c=y%10;
            y=y/10;
            ogl=ogl*10+c;
        }
        ///doua numere sunt prime intre ele daca cel mai mare divizor comun este 1. Astfel, vom calcula cmmdc-ul lui x si lui ogl prin urmatorul algoritm
        r=x%ogl;
        while(r!=0)
        {
            x=ogl;
            ogl=r;
            r=x%ogl;
        }
        if(ogl==1)
        k++;
    }
    stergere();
    if(k==0)
    cout<<"Nu este niciun numar care are proprietatea ca este prim cu oglinditul lui";
    if(k==1)
    cout<<"Este un numar care are proprietatea ca este prim cu oglinditul lui";
    else
    cout<<"Sunt "<<k<<" numere care au proprietatea ca sunt prime cu oglinditul lor";
    cout<<"\n";
}
void p211()
{
    int n,i,v[100],max=-1; ///In aceasta initializare am introdus si un vector de 100 de elemente, numarul de elemente al unui vector fiind precizat intre parantezele patrate
    cout<<"Numarul de numere ce trebuie citite:"<<"\n";
    cin>>n;
    cout<<"Numerele ce trebuie citite:"<<"\n";
    for(i=1;i<=n;i++)
    {
        cin>>v[i]; ///Valoarea dintre parantezele patrate se numeste indicele vectorului si defineste pozitia valorii date in vectorul v
        if(v[i]>max)
        max=v[i];
    }
    stergere();
    cout<<"Valoarea maxima din vector este "<<max<<"\n";
}
void p212()
{
    int n,i,a[9000]; ///In acest caz, vectorul este de 9000 de elemente si se numeste a. Numarul de elemente intr-un vector variaza de la o problema la alta
    cout<<"Numarul de numere ce trebuie citite:"<<"\n";
    cin>>n;
    cout<<"Numerele ce trebuie citite:"<<"\n";
    for(i=1;i<=n;i++)
    cin>>a[i]; ///Nu putem afisa din prima numerele ce sunt divizibile cu ultimul element din vector intrucat nu il stim
    stergere();
    for(i=1;i<=n-1;i++) ///Mai parcurgem odata vectorul pana in penultimul element, verificand conditia data
    if(a[i]%a[n]==0)
    cout<<a[i]<<" ";
    cout<<"\n";
}
void p213()
{
    int n,i,vec[250],max=-1,imax,min=INT_MAX,imin; ///minimul il initializam cu valoarea maxima posibila, valoare ce este accesata prin libraria CLIMITS.
    ///De asemenea, imax si imin reprezinta indicele maximului respectiv minimului
    cout<<"Numarul de numere ce trebuie citite:"<<"\n";
    cin>>n;
    cout<<"Numerele ce trebuie citite:"<<"\n";
    for(i=1;i<=n;i++)
    {
        cin>>vec[i];
        if(vec[i]>max)
        {
            max=vec[i];
            imax=i; ///Daca gasim un numar mai mare ca maximul, atunci actualizam maximul dar si indicele acestuia
        }
        if(vec[i]<min)
        {
            min=vec[i];
            imin=i;///Daca gasim un numar mai mic ca minimul, atunci actualizam minimul dar si indicele acestuia
        }
    }
    stergere();
    cout<<"Indicii maximului si minimului din vectorul dat sunt "<<imax<<" respectiv "<<imin<<"."<<"\n";
}
void p214()
{
    int n,i,a[3000],k=0;
    cout<<"Numarul de numere ce trebuie citite:"<<"\n";
    cin>>n;
    cout<<"Numerele ce trebuie citite:"<<"\n";
    for(i=1;i<=n;i++)
    cin>>a[i];
    int j,ok=1;
    for(i=1;i<n;i++) ///Parcurgem vectorul de 2 ori in paralel, la fiecare element parcurgand a doua oara vectorul sa verificam daca mai este vreun element cu aceeasi valoare ca elementul din primul for
    {
        ok=1;
        for(j=i+1;j<=n && ok==1;j++)
        if(a[i]==a[j]) ///Daca gasim vreo valoare care este egala cu valoarea de la care am plecat, inchidem structura repetitiva cu rezultatul ca numarul se repeta de-a lungul vectorului
        ok=0;
        k+=ok; ///Adunam k cu ok, care poate avea valoarea 1 sau 0,
    }
    stergere();
    if(k==0)
    cout<<"Toate numerele se repeta";
    else
    if(k==1)
    cout<<"Un singur numar apare o singura data in vector";
    else
    cout<<k<<" numere apar o singura data in vector";
    cout<<"\n";
}
void p221()
{
    int n,i,x,v[1000];
    cout<<"Pozitia de pe care se va sterge elementul din vector:"<<"\n";
    cin>>x;
    cout<<"Numarul de elemente ce trebuie citite in vector:"<<"\n";
    cin>>n;
    cout<<"Numerele din vector:"<<"\n";
    for(i=1;i<=n;i++)
    cin>>v[i];
    n--; ///Scadem n-ul cu 1 intrucat vom avea cu un element mai putin
    for(i=x;i<=n;i++)
    v[i]=v[i+1]; ///"Tragem" elementele de dupa x cu o pozitie mai in stanga
    stergere();
    cout<<"Noul vector este:"<<"\n";
    for(i=1;i<=n;i++)
    cout<<v[i]<<" "; ///Afisam vectorul
    cout<<"\n";
}
void p222()
{
    int n,i,a[1000];
    cout<<"Numarul de elemente din vector:"<<"\n";
    cin>>n;
    cout<<"Elementele din vector:"<<"\n";
    for(i=1;i<=n;i++)
    cin>>a[i];
    int x,num,ok;
    for(i=1;i<=n;i++)
    {
        ok=1;
        x=a[i];
        if(x==1 || x==0)
        ok=0;
        for(num=2;num*num<=x && ok==1;num++)/// Acesta este algoritmul de verificare daca un numar este prim.
        if(x%num==0)
        ok=0;
        if(ok==1)
        {
            n--;
            for(int j=i;j<=n;j++) ///Stergem numarul prim din vector, numar care in momentul verificarii se afla pe pozitia i
            a[j]=a[j+1];
        }
    }
    stergere();
    cout<<"Noul vector este:"<<"\n";
    for(i=1;i<=n;i++)
    cout<<a[i]<<" ";
    cout<<"\n";
}
void p223()
{
    int n,i,a[1000],x,c;/// X reprezinta pozitia pe care vom pune valoarea, iar C reprezinta numarul pe care il vom pune pe pozitia X
    cout<<"Pozitia pe care vom insera valoarea:"<<"\n";
    cin>>x;
    cout<<"Valoarea pe care o vom insera pe pozita "<<x<<" a vectorului:"<<"\n";
    cin>>c;
    cout<<"Numarul de elemente in vector:"<<"\n";
    cin>>n;
    cout<<"Elementele vectorului:"<<"\n";
    for(i=1;i<=n;i++)
    cin>>a[i];
    n++;
    for(i=n;i>=x+1;i--)///Algoritmul de inserare al unui element
    a[i]=a[i-1];
    a[x]=c;
    stergere();
    cout<<"Noul vector este:"<<"\n";
    for(i=1;i<=n;i++)
    cout<<a[i]<<" ";
    cout<<"\n";
}
void p224()
{
    int n,i,a[10000];
    cout<<"Numarul de elemente din vector:"<<"\n";
    cin>>n;
    cout<<"Elementele vectorului:"<<"\n";
    for(i=1;i<=n;i++)
    cin>>a[i];
    int j;
    for(i=1;i<=n;i++)
    {
        if(sqrt(a[i])==(int)sqrt(a[i]))///Asa putem veriifica daca un numar este patrat perfect sau nu.
        {
            n++;
            for(j=n;j>=i;j--)///Algoritmul de inserare a unui element intr-un vector
            a[j]=a[j-1];
            a[i]=sqrt(a[i+1]);
            i++;
        }
    }
    stergere();
    cout<<"Noul vector este:"<<"\n";
    for(i=1;i<=n;i++)
    cout<<a[i]<<" ";
    cout<<"\n";
}
void p231()
{
    int n,i,a[1000],ok=0;/// Initializam ok care are valoarea 1 cand sunt numere impare in vector si 0 cand nu sunt numere impare in vector
    cout<<"Numarul de elemente din vector:"<<"\n";
    cin>>n;
    cout<<"Elementele din vector:"<<"\n";
    for(i=1;i<=n;i++)
    cin>>a[i];
    for(i=1;i<=n && ok==0;i++) ///Daca gasim un numar impar, ok ia valoarea 1 si se opreste structura repetitiva
    if(a[i]%2==1)
    ok=1;
    stergere();
    if(ok==1)
    cout<<"In vector sunt numere impare in vector";
    else
    cout<<"In vector nu sunt numere impare in vector";
    cout<<"\n";
}
void p232()
{
    int n,i,a[1000],ok=1;
    cout<<"Numarul de elemente din vector:"<<"\n";
    cin>>n;
    cout<<"Elementele din vector:\n";
    for(i=1;i<=n;i++)
    cin>>a[i];
    for(i=1;i<=n && ok==1;i++) ///Presupunem ca toate elementele din vector sunt numere pare. Astfel, cand vom gasi un numar impar, ok va deveni 0 si se va inchide structura repetitiva
    if(a[i]%2==1)
    ok=0;
    stergere();
    if(ok==1)
    cout<<"In vector sunt doar numere pare";
    else
    cout<<"In vector nu sunt doar numere pare";
    cout<<"\n";
}
void p233()
{
    int n,i,a[1000],ok=1;
    cout<<"Numarul de elemente din vector:"<<"\n";
    cin>>n;
    cout<<"Elementele vectorului:"<<"\n";
    for(i=1;i<=n;i++)
    cin>>a[i];
    for(i=1;i<n && ok==1;i++) ///Mergem cu for-ul pana in n-1 intrucat noi verificam cu i+1 si e posibil sa optinem rezultate false daca mergem pana in n
    if(a[i]<a[i+1])
    ok=0;
    stergere();
    if(ok==1)
    cout<<"Sirul este ordonat crescator";
    else
    cout<<"Sirul nu este ordonat crescator";
    cout<<"\n";
}
void s1()
{
    stergere();
    cout<<"Sortare prin interschimbare cu 2 for-uri"<<"\n";
    int n,i,a[1000]; ///initializam vectorul pe care vrem sa il sortam
    cout<<"Numarul de elemente care trebuie citite:"<<"\n";
    cin>>n;
    cout<<"Elementele care trebuie citite:"<<"\n";
    for(i=1;i<=n;i++)
    cin>>a[i]; ///citim vectorul
    int j;
    for(i=1;i<n;i++)
        for(j=1;j<=n;j++) ///parcurgem cu 2 for-uri vectorul, fiecare element comparandu-l cu elementele de dupa el
    {
        if(a[i]>a[j]) ///sortam crescator
        {
            int aux;
            aux=a[i];
            a[i]=a[j]; ///schimbam valorile intre ele
            a[j]=aux;
        }
    }
    cout<<"Vectorul sortat este:"<<"\n";
    for(i=1;i<=n;i++)
    cout<<a[i]<<" "; ///afisam vectorul sortat
    cout<<"\n";
}
void s2()
{
    stergere();
    cout<<"Sortare prin Bubble Sort"<<"\n";
    int n,i,a[100]; ///declaram vectorul pe care vrem sa il sortam
    cout<<"Numarul de elemente din vector:"<<"\n";
    cin>>n;
    cout<<"Elementele din vector:"<<"\n";
    for(i=1;i<=n;i++)
    cin>>a[i]; ///citim valorile pe care vrem sa le sortam
    int ok=1; ///initializam o variabila ok prin care verificam daca vectorul a fost sortat sau nu
    do
    {
        ok=0; ///plecam cu presupunerea ca vectorul este sortat
        for(i=1;i<n;i++) ///parcurgem vectorul cu un singur for, verificand daca vectorul este intr-adevar sortat sau nu
        if(a[i]>a[i+1]) ///conditia pentru sortarea crescatoare
        {
            int aux;
            aux=a[i];
            a[i]=a[i+1]; ///schimbam valorile intre ele
            a[i+1]=aux;
            ok=1; ///schimbam valoarea lui ok, stiind astfel ca vectorul nu este sortat
        }
    }
    while(ok==1); ///daca vectorul nu este sortat, programul va intra iar in do while, facand asta pana cand vectorul este intreg sortat
    cout<<"Vectorul sortat este:"<<"\n";
    for(i=1;i<=n;i++)
    cout<<a[i]<<" "; ///afisam vectorul sortat
    cout<<"\n";
}
void s3()
{
    stergere();
    cout<<"Sortare prin selectarea minimului (Crescator)"<<"\n";
    int n,i,a[100],min; ///am declarat variabila min pe care o vom folosi in aceasta sortare
    cout<<"Numarul de elemente din vector:"<<"\n";
    cin>>n;
    cout<<"Elementele din vector:"<<"\n";
    for(i=1;i<=n;i++)
    cin>>a[i]; ///citim vectorul care trebuie sortat
    for(i=1;i<n;i++)
    {
        int poz;
        poz=i; ///initializam poz astfel incat sa putem compara pozitia actuala a minimului si pozitia pe care trebuie acesta sa ajunga
        min=a[i]; ///plecam cu ipoteza ca minimul din vector este valoarea de pe pozitia i
        for(int j=i+1;j<=n;j++) ///comparam elementul de pe pozitia i cu restul vectorului
        {
            if(a[j]<a[i])
            {
                min=a[j]; ///daca valoarea de pe pozitia i nu este minimul din vector, actualizam min
                poz=j;
            }
        }
        if(poz>i)
        {
            int aux;
            aux=a[i];
            a[i]=a[poz]; ///daca poz si-a schimbat valoarea pe durata comparatiei elemenutlui de pe pozitia i cu restul vectorului,
            a[poz]=aux; ///atunci schimbam intre ele valorile de pe poz si i, dupa fiecare marire a lui i elementul de pe pozitia precedenta
            ///aflandu-se pe pozitia sa finala in vectorul sortat
        }
    }
    cout<<"Vectorul sortat este:"<<"\n";
    for(i=1;i<=n;i++)
    cout<<a[i]<<" ";///afisam vectorul sortat
    cout<<"\n";
}
void s4()
{
    stergere();
    cout<<"Sortare prin selectarea maximului (Crescator)"<<"\n";
    int n,i,a[100],max; ///declaram max, pe care il vom folosi de-a lungul sortarii
    cout<<"Numarul de elemente din vector:"<<"\n";
    cin>>n;
    cout<<"Elementele din vector:"<<"\n";
    for(i=1;i<=n;i++)
    cin>>a[i]; ///citim valorile care trebuie sortate
    for(i=n;i>1;i--) ///parcurgem vectorul invers, folosind max-ul pentru a plasa maximul pe pozitia sa in vectorul final
    {
        int poz;
        poz=i;
        max=a[i]; ///plecam cu ideea ca elementul de pe pozitia i este maximul din vector
        for(int j=i-1;j>=1;j--) ///verificam afirmatia facuta in max prin compararea elementelor din restul vectorului cu el de pe pozitia i
        if(a[j]<a[i])
        {
            int aux;
            aux=a[j];
            a[j]=a[i]; ///schimbam elementele intre ele
            a[i]=aux;
        }
    }
    cout<<"Vectorul sortat este:"<<"\n";
    for(i=1;i<=n;i++)
    cout<<a[i]<<" "; ///afisam vectorul sortat
    cout<<"\n";
}
void s5()
{
    stergere();
    cout<<"Sortare prin numarare"<<"\n";
    int n,i,a[100],c[100]; ///vectorul a este vectorul unde avem elementele nesortate si c vectorul final sortat
    int b[100000]={0}; ///declaram un vector b in care numaram nr de elemente mai mici decat acea valoare, initializandu-l cu 0
    cout<<"Numarul de elemente din vector:"<<"\n";
    cin>>n;
    cout<<"Elementele din vector:"<<"\n";
    for(i=1;i<=n;i++)
    cin>>a[i]; ///citim vectorul care trebuie sortat
    int j;
    for(i=1;i<n;i++)
        for(j=i+1;j<=n;j++) ///parcurgem vectorul a sa determinam elementele din vectorul b
    {
        if(a[i]>a[j])
        {
            b[i]++; ///numaram numarul de elemente care sunt mai mici decat a[i]
        }
        else
        b[j]++;
    }
    for(i=1;i<=n;i++)
    c[i]=a[b[i]+1];
    cout<<"Vectorul sortat este:"<<"\n";
    for(i=1;i<=n;i++)
    cout<<c[i]<<" ";
    cout<<"\n";
}
int s6()
{
    stergere();
    ifstream f("s6.in");
    ofstream g("s6.out");
    cout<<"Sortare prin insertie"<<"\n";
    cout<<"Fisierele in care vor fi introduse valorile sunt s6.in, respectiv s6.out. Daca nu ati introdus"<<"\n"<<"valori in fisiere, apasati 1 pentru a iesi din program. Daca nu, introduceti 2"<<"\n";
    int verif;
    cin>>verif;
    if(verif==1)
    return 0;
    int n,i,a[1000];
    f>>a[1]; ///citesc prima valoare din vector
    int k=1;
    while(f>>n) ///plasez fiecare element in pozitia sa finala din timpul citirii
    {
        if(n>a[k]) ///cazul 1: cand valoarea citita vine pe ultima pozitie (maximul)
        {
            k++; ///crestem numarul de elemente din vector
            a[k]=n;
        }
        if(n<a[1]) ///cazul 2: cand valoarea citita vine pe prima pozitie (minimul)
        {
            k++; ///crestem numarul de elemente din vector
            for(int j=k;j>1;j--)
            a[j]=a[j-1]; ///mutam toate elementele cu o pozitie in dreapta
            a[1]=n;
        }
        else ///cazul 3: cand valoarea citita vine intre minimul si maximul din vector
        {
            int poz=1;
            while(n>a[poz])
            {
                poz++; ///verificam pozitia unde trebuie sa ajunga valoarea citita
            }
            k++; ///crestem numarul de elemente din vector
            for(int j=k;j>poz;j--)
            a[j]=a[j-1]; ///mutam toate elementele cu o pozitie in dreapta
            a[poz]=n;
        }
    }
    g<<"Vectorul sortat este:"<<"\n";
    for(i=1;i<=k;i++)
    g<<a[i]<<" "; ///afisam vectorul final
    cout<<"\n";
}
void s7()
{
    stergere();
    cout<<"Sortare prin interclasare"<<"\n"<<"\n";
    cout<<"Aceasta sortare necesita doi vectori deja sortati!!!"<<"\n";
    int n,i,a[100],m,b[100],c[200]; ///Vectorii a si b sunt vectorii deja sortati, si c este vectorul final cu elementele din a si din b sortate crescator
    cout<<"Numarul de elemente din primul vector sortat crescator:"<<"\n";
    cin>>n;
    cout<<"Elementele din primul vector sortat:"<<"\n";
    for(i=1;i<=n;i++)
    cin>>a[i]; ///elementele din primul vector sortat
    cout<<"Numarul de elemente din cel de-al doilea vector sortat crescator:"<<"\n";
    cin>>m;
    cout<<"Elementele din al doilea vector crescator:"<<"\n";
    for(i=1;i<=m;i++)
    cin>>b[i];
    i=1;
    int k=0,j=1; ///declaram variabila in care vom contoriza numarul de elemente din vectorul final
    while(i<=n && j<=m)
    {
        k++;
        if(a[i]<b[j])
        {
            c[k]=a[i];
            i++;
        }
        else
        {
            c[k]=b[j];
            j++;
        }
    }
    while(i<=n)
    {
        k++;
        c[k]=a[i];
        i++;
    }
    while(j<=m)
    {
        k++;
        c[k]=b[j];
        j++;
    }
    cout<<"Elementele din vectorul final sunt:"<<"\n";
    for(i=1;i<=k;i++)
    cout<<c[i]<<" ";
    cout<<"\n";
}
void metodesort()
{
    stergere();
    int x;
    do
            {
                cout<<"Metode de sortare a vectorilor"<<"\n"<<"\n"<<"\n";
                cout<<"1. Sortare prin interschimbare cu 2 for-uri."<<"\n";
                cout<<"2. Sortare prin bubble Sort."<<"\n";
                cout<<"3. Sortare prin selectarea minimului (Crescator)."<<"\n";
                cout<<"4. Sortare prin selectarea maximului (Crescator)."<<"\n";
                cout<<"5. Sortare prin numarare."<<"\n";
                cout<<"6. Sortare prin insertie.(Fisier)"<<"\n";
                cout<<"7. Sortare prin interclasare."<<"\n";
                cout<<"8. Inchide"<<"\n";
                cin>>x;
                if(x==1)
                s1();
                else
                if(x==2)
                s2();
                else
                if(x==3)
                s3();
                else
                if(x==4)
                s4();
                else
                if(x==5)
                s5();
                else
                if(x==6)
                s6();
                else
                if(x==7)
                s7();
                else
                if(x>7)
                {
                    x=0;
                    system("cls");
                }
            }
            while(x>=1 && x<=7);

}
void p242()
{
    stergere();
    int n,i,a[1000];
    cout<<"Numarul de elemente ale vectorului:"<<"\n";
    cin>>n;
    cout<<"Elementele vectorului:"<<"\n";
    for(i=1;i<=n;i++)
    cin>>a[i];
    int j;
    for(i=1;i<n;i++)
    {
        for(j=i+1;j<=n;j++) ///Acesta este algoritmul de sortare prin interschimbare cu 2 for-uri
        if(a[i]>a[j])
        swap(a[i],a[j]); ///Swap este o functie care interschimba valorile celor 2 variabile
    }
    cout<<"Vectorul ordonat crescator este:"<<"\n";
    for(i=1;i<=n;i++)
    cout<<a[i]<<" ";
    cout<<"\n";
}
void p243()
{
    stergere();
    int n,i,a[10000],b[10000],j;/// Am initializat un al doilea vector b deoarece in acesta vom pune elementele care sunt prime cu ultimul element al vectorului pentru a le putea sorta
    cout<<"Numarul de elemente al vectorului:"<<"\n";
    cin>>n;
    cout<<"Elementele vectorului:"<<"\n";
    for(i=1;i<=n;i++)
    cin>>a[i];
    int k=0,c,d;
    for(i=1;i<n;i++)
    {
        c=a[i];
        d=a[n]; ///copiile celor 2 numere deoarece ele isi schimba valoarea in timpul cmmdc-ului
        int r=c%d;
        while(r!=0)
        {
            c=d;
            d=r;
            r=c%d; ///Calculam care numere sunt prime cu ultimul element din vector prin intermediul cmmdc-ului care este 1 daca sunt prime intre ele si le punem intr-un vector b de contor k ce se mareste la fiecare adaugare de elemente
        }
        if(d==1)
        {
            k++;
            b[k]=a[i];
        }
    }
    int ok;
    do ///Algoritmul de sortare a vectorului prin BubbleSort
    {
        ok=0;
        for(i=1;i<k;i++)
        if(b[i]>b[i+1])
        {
            swap(b[i],b[i+1]);
            ok=1;
        }
    }
    while(ok==1);
    cout<<"Elementele care sunt prime cu ultimul element din vector, ordonate crescator, sunt:"<<"\n";
    for(i=1;i<=k;i++)
    cout<<b[i]<<" ";
}
void p244()
{
    stergere();
    int n,i,a[1000],max=-1,imax;/// Initializam maximul cu -1 si un imax care reprezinta indicele maximului
    cout<<"Numarul de elemente din vector:"<<"\n";
    cin>>n;
    cout<<"Elementele vectorului:"<<"\n";
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]>max)
        {
            max=a[i]; ///Aflam maximul si indicele lui
            imax=i;
        }
    }
    int ok;
    do
    {
        ok=0;
        for(i=1;i<imax;i++)
        if(a[i]>a[i+1]) ///Sortam crescator elementele pana la indicele maximului prin intermediul BubbleSort-ului
        {
            swap(a[i],a[i+1]);
            ok=1;
        }
    }
    while(ok==1);
    int j;
    for(i=imax+1;i<n;i++)
    {
        for(j=i+1;j<=n;j++) ///Sortam descrescator elementele de la indicele maximului pana la final prin intermediul Sortarii Interschmbarii cu 2 for-uri
        if(a[i]<a[j])
        swap(a[i],a[j]);
    }
    cout<<"Noul vector este:"<<"\n"; ///Afisam vectorul modificat
    for(i=1;i<=n;i++)
    cout<<a[i]<<" ";
    cout<<"\n";
}
void p245()
{
    int n,i,a[10000],j,min,poz;
    cout<<"Numarul de elemente:";
    cin>>n;
    cout<<"Elementele vectorului:"<<"\n";
    for(i=1;i<=n;i++)
    cin>>a[i]; ///citim vectorul
    for(i=1;i<n;i++)
    {
        min=a[i]; ///plecam cu ideea ca vectorul este deja sortat, minimul acestuia fiind pe prima pozitie
        poz=i;
        for(j=i+1;j<=n;j++)
        {
            if(a[j]<min)
            {
                min=a[j]; ///verificam daca minimul initial este minimul actual al vectorului
                poz=j;
            }
        }
        if(i<poz)
        {
            int aux;
            aux=a[i]; ///daca nu, interschimbam valorile
            a[i]=a[poz];
            a[poz]=aux;
        }
    }
    cout<<"Noul vector este:"<<"\n";
    for(i=1;i<=n;i++)
    cout<<a[i]<<" "; ///afisam
    cout<<"\n";

}
void p246()
{
    ifstream f("245.in");
    ofstream g("245.out");
    int v[10000],x,poz,k=1,i;
    f>>x;
    v[1]=x;
    while(f>>x)
    {
        poz=1;
        while(x>v[poz] && poz<=k)
        poz++;
        k++;
        for(i=k;i>poz;i--)
        v[i]=v[i-1];
        v[poz]=x;
    }
    for(i=1;i<=k;i++)
    g<<v[i]<<" ";
}
void p247()
{
    stergere();
    int n,i,a[100],x;
    cout<<"Numarul a carei pozitie trebuie sa o aflam dupa ce vectorul este sortat:"<<"\n";
    cin>>x;
    cout<<"Numarul de elemente care trebuie citite in vector:"<<"\n";
    cin>>n;
    cout<<"Elementele vectorului care trebuie citit:"<<"\n";
    for(i=1;i<=n;i++)
    cin>>a[i];
    int j;
    for(i=1;i<n;i++)
        for(j=i+1;j<=n;j++)
    {
        if(a[i]>a[j])
        {
            int aux;
            aux=a[i];
            a[i]=a[j];
            a[j]=aux;
        }
    }
    for(i=1;i<=n;i++)
    if(a[i]==x)
    cout<<"Pozitia pe care se afla elementul dat dupa sortarea vectorului este "<<i<<"\n";
}
void p251()
{
    int n,i,a[11]={0},x;
    cout<<"Numarul de cifre:"<<"\n";
    cin>>n;
    cout<<"Cifrele:"<<"\n";
    for(i=1;i<=n;i++)
    {
        cin>>x;
        a[x]++; ///Un vector de frecventa se defineste prin marirea valorii elementului in functie de indice, indicele fiind in acest caz elementul principal
    }
    stergere();
    int j,k=0;
    for(i=0;i<=9;i++)
    {
        for(j=1;j<=a[i];j++) ///Parcurgem elementele vectorului dupa indice, fiecare cifra afisand-o de cate ori este valoarea elementului de pe acea pozitie
        {
            cout<<i<<" ";
            k++;
            if(k%20==0)
            cout<<"\n";
        }
    }
    cout<<"\n";
}
void p252()
{
    int n,i,a[1010]={0},x;
    cout<<"Numarul de elemente citite:"<<"\n";
    cin>>n;
    cout<<"Numerele:"<<"\n";
    for(i=1;i<=n;i++)
    {
        cin>>x;
        if(x<1000)
        a[x]++;
    }
    int nr1=-1,nr2=-1;
    for(i=999;i>=1 && nr2==-1;i--) ///Noi vom rula structura repetitiva pana cand al doilea numar este inlocuit. Plecam de la 999 deoarece astfel vom obtine cele mai mari valori
    {
        if(a[i]==0)
        {
            if(nr1==-1)
            nr1=i; ///Inlocuim primul numar cel mai mare cu valoarea care nu se afla in vectorul de secventa
            else
            if(nr2==-1)
            nr2=i;/// Inlocuim al doilea numar cel mai mare cu valoarea care nu se afla in vectorul de secventa
        }
    }
    stergere();
    if(nr2==-1)
    cout<<"Nu exista doua numere care sa indeplineasca cerinta data";
    else
    cout<<"Cele mai mari doua numere de 3 cifre care nu apartin sirului intial sunt "<<nr1<<" si "<<nr2<<"\n";
}
void p253()
{
    int x,n,i,a[110],max=-1;
    cout<<"Numarul de sosete:"<<"\n";
    cin>>n;
    cout<<"Numerele de pe sosete:"<<"\n";
    for(i=1;i<=n;i++)
    {
        cin>>x;
        a[x]++; ///Formam vectorul de frecventa
        if(x>max)
        max=x; ///Am calculat un maxim deoarece astfel vom stii valoarea pana la care vom merge in vectorul de frecventa
    }
    int s=0;
    for(i=1;i<=max;i++)
    s=s+a[i]/2;
    stergere();
    cout<<"Numarul de sosete ce se poate forma este:"<<"\n";
    cout<<s<<"\n";
}
void p254()
{
    int n,i,x,a[100000],s,c;
    cout<<"Numarul de numere ce trebuie citite:"<<"\n";
    cin>>n;
    cout<<"Sirul de numere:"<<"\n";
    int max=-1;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        s=0;
        while(x!=0)
        {
            c=x%10;
            x=x/10;
            s=s+c;
        }
        a[s]++;
        if(s>max)
        max=s;
    }
    ///Pentru a afla numarul de perechi vom folosi urmatoarea formula: n*(n-1)/2, unde n reprezinta numarul de termeni din care vrem sa facem perechi
    int nr=0;
    for(i=1;i<=max;i++)
    nr=nr+((a[i]*(a[i]-1))/2);
    stergere();
    cout<<"Numarul de perechi cu numere cu aceeasi suma a cifrelor este"<<"\n";
    cout<<nr<<"\n";
}
void p311()
{
    stergere();
    int n,i,m,j,a[1000][1000]; ///n este numarul de linii, m numarul de coloane, iar a este matricea
    cout<<"Numarul de linii ale matricii:"<<"\n";
    cin>>n;
    cout<<"Numarul de coloane ale matricii:"<<"\n";
    cin>>m;
    cout<<"Elementele matricii:"<<"\n";
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
        cin>>a[i][j]; ///citirea unei matrici
    int s=0; ///s este variabila unde vom aduna elementele pare din matrice
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
        if(a[i][j]%2==0)
        s=s+a[i][j];
    cout<<"Suma elementelor pare din matrice este "<<s;
    cout<<"\n";

}
void p312()
{
    stergere();
    int n,i,j,m,a[100][100];
    cout<<"Numarul de linii ale matricii:"<<"\n";
    cin>>n;
    cout<<"Numarul de coloane ale matricii:"<<"\n";
    cin>>m;
    cout<<"Elementele matricii:"<<"\n";
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
        cin>>a[i][j];
    int s;
    for(i=1;i<=n;i++) ///parcurgem fiecare linie si calculam suma separat
    {
        s=0; ///cand intram pe o linie noua, resetam suma
        for(j=1;j<=m;j++)
        s=s+a[i][j]; ///adunam elementele de pe linia i si de pe toate coloanele din matrice
        cout<<"Suma elementelor de pe linia "<<i<<" este "<<s;
    }
    cout<<"\n";
}
void p313()
{
    stergere();
    int n,m,j,i,a[101][101];
    cout<<"Numarul de linii ale matricii:"<<"\n";
    cin>>n;
    cout<<"Numarul de coloane ale matricii:"<<"\n";
    cin>>m;
    cout<<"Elementele matricii:"<<"\n";
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
        cin>>a[i][j]; ///citim matricea
    int s;
    for(i=1;i<=n;i++)
    {
        s=0;
        for(j=1;j<=m;j++)
        s=s+a[i][j];
        a[i][0]=s; ///dupa ce determinam suma elementelor, o punem pe coloana 0 a matricei astfel incat sa putem ordona liniile
    }
    for(i=1;i<n;i++)
        for(j=i+1;j<=n;j++)
    {
        if(a[i][0]>a[j][0])
        {
            int aux;
            aux=a[j][0];
            a[j][0]=a[i][0];
            a[i][0]=aux; ///interschimbam sumele liniilor intre ele
            for(int t=1;t<=m;t++)
            {
                aux=a[i][t];
                a[i][t]=a[j][t];
                a[j][t]=aux; ///interschimbam elementele de pe linii intre ele
            }

        }
    }
    cout<<"Matricea sortata dupa suma elementelor de pe linii este:"<<"\n";
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        cout<<a[i][j]<<" ";
        cout<<"\n";
    }
    cout<<"\n";

}
void p314()
{
    stergere();
    int n,i,m,j,a[100][100],v[100000]={0},kmax; ///v este vectorul de frecventa in care vom numara numarul de aparitii ale elementelor
    cout<<"Numarul de linii in matrice:"<<"\n";
    cin>>n;
    cout<<"Numarul de coloane in matrice:"<<"\n";
    cin>>m;
    cout<<"Elementele matricii:"<<"\n";
    kmax=-1;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
        {
            cin>>a[i][j];
            v[a[i][j]]++; ///adunam numarul de aparitii in vectorul de frecventa
            if(a[i][j]>kmax)
            kmax=a[i][j]; ///vedem care este numarul maxim care apare in matrice
        }
    int max=-1;
    for(i=1;i<=kmax;i++) ///parcurgem vectorul de frecventa sa gasim numarul maxim de aparitii
    if(v[i]>max)
    max=v[i];
    for(i=kmax;i>=1;i--) ///parcurgem vectorul de frecventa invers pentru a sari peste verificarea daca elementul afisat este cel mai mare element cu nr maxim de aparitii
    if(v[i]==max)
    {
        cout<<i;
        break; ///break este o structura care este utilizata pentru a intrerupe structura repetitiva si pentru a trece direct la instructiunea urmatoare
    }
    cout<<"\n";
}
void p321()
{
    stergere();
    int n,i,a[100][100],j;
    cout<<"Numarul de linii si de coloane in matrice:"<<"\n";
    cin>>n;
    int s1=0,s2=0; ///s1 este suma elementelor de pe diagonala princuipala, iar s2 este suma elementelor de pe diagonala secundara
    cout<<"Elementele din matrice:"<<"\n";
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        {
            cin>>a[i][j];
            if(i==j)
            s1=s1+a[i][j]; ///Daca un element este citit pe diagonala principala, acesta este adunat la s1
            if(i+j==n+1)
            s2=s2+a[i][j]; ///Daca un element este citit pe diagonala secundara, acesta este adunat la s2
        }
    cout<<"Diferenta absoluta intre suma elementelor de pe diagonala principala si cea secundara este "<<abs(s1-s2);
    cout<<"\n";
}
void p322()
{
    stergere();
    int n,i,a[100][100]={0},j; ///Am initializat matricea cu valoarea 0 intrucat va trebui sa o bordam sa nu introducem cazuri speciale
    ///pentru elementele aflate pe marginea matricei
    cout<<"Numarul de linii si de coloane in matrice:"<<"\n";
    cin>>n;
    cout<<"Elementele din matrice:"<<"\n";
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        cin>>a[i][j]; ///citim matricea
    int k=0; ///in variabila k vom contoriza numarul de elemente care sunt mai mari decat vecinii lor
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
    {
        if(a[i][j]>a[i-1][j] && a[i][j]>a[i+1][j] && a[i][j]>a[i][j-1] && a[i][j]>a[i][j+1])
        k++; ///daca un elemente este mai mare decat vecinii sai, crestem k cu 1
    }
    cout<<"Numarul de elemente care sunt mai mari decat vecinii lor este "<<k;
    cout<<"\n";

}
void p323()
{
    stergere();
    int n,i,j,a[100][100];
    cout<<"Numarul de linii si de coloane in matrice:"<<"\n";
    cin>>n;
    cout<<"Elementele matricii sunt:"<<"\n";
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        cin>>a[i][j];
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        if(i==j)
        cout<<a[i][j]<<" "; ///ca un element sa se afle pe diagonala principala, coordonatele sale trebuie sa fie egale (i=j)
    cout<<"\n";
}
void p324()
{
    stergere();
    int n,i,j,a[100][100];
    cout<<"Numarul de linii si de coloane in matrice:"<<"\n";
    cin>>n;
    cout<<"Elementele matricii:"<<"\n";
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        cin>>a[i][j];
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        if(i+j==n+1)
        cout<<a[i][j]<<" "; ///ca un element sa se afle pe diagonala secundara, coordonatele sale trebuie sa fie egal cu numarul de linii/coloane +1 (i+j=n+1)
    cout<<"\n";
}
void p331()
{
    stergere();
    int n,m,j,i,a[100][100];
    cout<<"Numarul de linii in matricea care trebuie generata:"<<"\n";
    cin>>n;
    cout<<"Numarul de coloane in matricea care trebuie generata:"<<"\n";
    cin>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
        a[i][j]=min(i,j); ///min este o functie care selecteaza automat minimul dintre doua valori
    cout<<"Matricea generata este:"<<"\n";
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        cout<<a[i][j]<<" "; ///afisam matricea generata
        cout<<"\n";
    }
    cout<<"\n";
}
void p332()
{
    stergere();
    int n,m,i,j,a[100][100],k=1; ///k va reprezenta numarul impar al carui patrat il vom pune de-a lungul matricii
    cout<<"Numarul de linii in matrice:"<<"\n";
    cin>>n;
    cout<<"Numarul de coloane in matrice:"<<"\n";
    cin>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
    {
        a[i][j]=k*k;
        k=k+2;
    }
    cout<<"Matricea generata este:"<<"\n";
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        cout<<a[i][j]<<" ";
        cout<<"\n";
    }
    cout<<"\n";
}
long long auxp10111(int n) ///scriem functia de tip long long pentru ca aceasta returneaza valori de tip long long
{
    long long s=1; ///initializem factorialul de tip long long pentru a fi sigur ca il putem calcula
    for(int i=1;i<=n;i++)
    s=s*i; ///calculam factorialul lui n
    return s;
}
void p10111()
{
    stergere();
    int n;
    cout<<"Numarul care trebuie citit:";
    cin>>n;
    cout<<"Factorialul numarului "<<n<<" este "<<auxp10111(n); ///auxp10111 este subprogramul care este cerut in cerinta
    cout<<"\n";
}
int auxp10112(int n)
{
    int s=0; ///variabila in care vom calcula suma cifrelor
    while(n!=0) ///nu ne trebuie o copie a variabilei n, pentru ca subprogramul, avand parametru formal prin valoare, isi va face o copie pe stiva,
    ///valoarea din main nemodificandu-se cand apelam functia
    {
        s=s+n%10;
        n=n/10; ///calculam suma cifrelor
    }
    return s; ///returnam suma cifrelor
}
void p10112()
{
    stergere();
    int n;
    cout<<"Numarul citit este:"<<"\n";
    cin>>n;
    cout<<"Suma cifrelor numarului "<<n<<" este "<<auxp10112(n);
    cout<<"\n";
}
int auxp10113(int n)
{
    int ogl=0; ///nu trebuie sa facem o copie a lui n pentru a calcula oglinditul intrucat noi nu vom pierde valoarea lui,
    ///parametrul formal fiind prin valoare
    while(n!=0)
    {
        ogl=ogl*10+n%10; ///calculam oglinditul
        n=n/10;
    }
    return ogl;
}
void p10113()
{
    stergere();
    int n;
    cout<<"Numarul citit este:"<<"\n";
    cin>>n;
    cout<<"Oglinditul numarului "<<n<<" este "<<auxp10113(n);
    cout<<"\n";
}
void auxp10121(int &n)
{
    int ogl=0;
    while(n!=0)
    {
        ogl=ogl*10+n%10;
        n=n/10;
    }
    n=ogl; ///returnam oglinditul prin parametrul formal, acesta fiind prin referinta, dar stergand valoarea initiala a lui n
}
void p10121()
{
    stergere();
    int n;
    cout<<"Numarul citit este:"<<"\n";
    cin>>n;
    auxp10121(n);
    cout<<"Oglinditul numarului citit este "<<n;
    cout<<"\n";
}
void FRadical(int n, int &x, int &y)
{
    for(int i=sqrt(n);i>1;i--)
    if(n%(i*i)==0)
    {
        x=i;
        y=n/(i*i);
        break;
    }
}
void p10122()
{
    stergere();
    int x,y,n;
    cout<<"Numarul n:";
    cin>>n;
    FRadical(n,x,y);
    cout<<"Numerele x si y care indeplinesc conditia din enunt sunt "<<x<<" si "<<y;
    cout<<"\n";
}
void Impare(int &n)
{
    int nrnou=0;
    while(n!=0)
    {
        int x;
        x=n%10-n%2;
        nrnou=nrnou*10+x;
        n=n/10;
    }
    n=0;
    while(nrnou!=0)
    {
        n=n*10+nrnou%10;
        nrnou/=10;
    }
}
void p10123()
{
    stergere();
    int n;
    cout<<"Numarul citit:"<<"\n";
    cin>>n;
    Impare(n);
    cout<<"Numarul modificat dupa enunt este "<<n;
    cout<<"\n";
}
void auxp10131(int n,int a[],int x,int y)
{
    for(int i=x;i<=y;i++)
    {
        for(int j=i;j<n;j++)
        a[j]=a[j+1];
    }
}
void p10131()
{
    stergere();
    int n,a[101];
    cout<<"Numarul de elemente din tabloul unidimensional:"<<"\n";
    cin>>n;
    cout<<"Elementele tabloului unidimensional:"<<"\n";
    for(int i=1;i<=n;i++)
    cin>>a[i];
    int x,y;
    cout<<"Pozitiile intre care elementele vor fi sterse"<<"\n";
    cin>>x>>y;
    auxp10131(n,a,x,y);
    cout<<"Noul vector:"<<"\n";
    for(int i=1;i<=n;i++)
    cout<<a[i]<<" ";
    cout<<"\n";
}
void Insert(int a[], int &n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        if(a[i]%2==1)
        {
            n++;
            for(int j=n;j>i;j++)
            a[j]=a[j-1];
            a[i+1]=a[i]*2;
        }
    }
}
void p10132()
{
    stergere();
    int n,a[101];
    cout<<"Numarul de elemente din vector:"<<"\n";
    cin>>n;
    cout<<"Elementele vectorului:"<<"\n";
    for(int i=1;i<=n;i++)
    cin>>a[i];
    Insert(a,n);
    cout<<"Noul vector este:"<<"\n";
    for(int i=1;i<=n;i++)
    cout<<a[i]<<" ";
    cout<<"\n";
}
void afismat(int a[][101],int n,int m)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        cout<<a[i][j]<<" ";
        cout<<"\n";
    }
}
void p10133()
{
    stergere();
    int n,m,a[101][101];
    cout<<"Numarul de linii ale matricii:"<<"\n";
    cin>>n;
    cout<<"Numarul de coloane ale matricii:"<<"\n";
    cin>>m;
    cout<<"Elementele matricii:"<<"\n";
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
        cin>>a[i][j];
    cout<<"Afisarea matricii"<<"\n";
    afismat(a,n,m);
    cout<<"\n";
}
void p10211()
{
    stergere();
    char s[256];
    cout<<"Textul care trebuie verificat:"<<"\n";
    cin.getline(s,256); ///citim sirul de caractere
    int k=0;
    for(int i=1;i<=strlen(s);i++)
    {
        if(strchr("aeiou",s[i])!=NULL && strchr("aeiou",s[i+1])==NULL && strchr("aeiou",s[i-1])==NULL && s[i+1]!=' ' && s[i-1]!=' ')
        k++;
    }
    cout<<"Numarul de vocale aflate intre doua consoane este "<<k;
    cout<<"\n";
}
void p10212()
{
    stergere();
    char s[256];
    cout<<"Textul care trebuie modificat:"<<"\n";
    cin.getline(s,255);
    for(int i=1;i<strlen(s);i++)
    {
        if(strchr("aieou",s[i])!=NULL)
        {
            s[i]-=32;
        }
    }
    cout<<"Noul sir este"<<"\n";
    cout<<s;
    cout<<"\n";
}
void p10213()
{
    stergere();
    char s[15],m[15];
    cout<<"Cuvantul care trebuie citit:"<<"\n";
    cin.get(s,11);
    strcpy(m,s);
    cout<<"Prefixele cuvantului sunt:"<<"\n";
    cout<<m<<"\n";
    for(int i=strlen(s)-1;i>=0;i--)
    {
        strcpy(s+i,s+i+1);
        if(i==0)
        cout<<s;
        else
        cout<<s<<"\n";
    }
    cout<<m<<"\n";
    cout<<"Sufixele cuvantului sunt:"<<"\n";
    int x;
    x=strlen(m);
    for(int i=0;i<x;i++)
    {
        strcpy(m,m+1);
        if(i==x-1)
        cout<<m;
        else
        cout<<m<<"\n";
    }
    cout<<"\n";
}
int voc(char c[])
{
    for(int i=0;i<strlen(c);i++)
    if(strchr("aieou",c[i])==NULL)
    return 0;
    return 1;
}
void p10221()
{
    stergere();
    char s[260];
    cout<<"Propozitia care trebuie citita este:"<<"\n";
    cin.getline(s,256);
    char *pt;
    cout<<"Cuvintele din propozitie care contin numai vocale sunt:"<<"\n";
    pt=strtok(s," ");
    while(pt!=NULL)
    {
        char c[50];
        strcpy(c,pt);
        if(voc(c)==1)
        cout<<c<<"\n";
        pt=strtok(NULL," ");
    }
    cout<<"\n";
}
int palindrom(char a[]) ///functie care verifica daca un sir de caractere este palindrom sau nu, folositor pentru p10222
{
    for(int i=0;i<strlen(a)/2;i++)
    if(a[i]!=a[strlen(a)-1-i])
    return 0;
    return 1;
}
bool cuv(char a[])
{
    for(int i=0;i<strlen(a);i++)
    if(isalpha(a[i])==false)
    return false;
    return true;
}
void p10222()
{
    stergere();
    char s[260];
    cout<<"Sirul de caractere care trebuie citit este:"<<"\n";
    cin.getline(s,256);
    char pal[15]="z";
    char * pt;
    int ok=0;
    pt=strtok(s,", .");
    while(pt!=NULL)
    {
        char c[15];
        strcpy(c,pt);
        if(palindrom(c)==1 && strcmp(pal,c)>0 && cuv(c)==true)
        {
            strcpy(pal,c);
            ok=1;
        }
        pt=strtok(NULL,",. ");
    }
    if(ok==0)
    cout<<"IMPOSIBIL";
    else
    cout<<"Primul cuvant palindrom din text in ordine alfabetica este "<<pal;
    cout<<"\n";
}
void p10223()
{
    stergere();
    char s[257], t[251];
    cout<<"Primul sir de caractere este:"<<"\n";
    cin.getline(s, 251);
    cout<<"Al doilea sir de caractere este:"<<"\n";
    cin.getline(t, 251);
    cout<<"Caracterele care se gasesc si in primul si in al doilea sir de caractere sunt:"<<"\n";
    for(int i = 0; i<strlen(s); i++)
    if(strchr(t, s[i]))
        cout<<s[i];
    cout<<"\n";
}
int auxp1031(int n)
{
 	if(n>0)
    return n*auxp1031(n-1);
    else
    return 1;
}
void p1031()
{
    stergere();
    int n;
    cout<<"Numarul care trebuie citit:"<<"\n";
    cin>>n;
    cout<<"Factorialul numarului este "<<auxp1031(n); ///auxp1031 este functia recursiva in care calculam factorialul numarului n
    cout<<"\n";
}
int auxp1032(int a,int b)
{
    int r;
    r=a%b;
    if(r!=0)
    return auxp1032(b,r);
    else
    return b;
}
void p1032()
{
    stergere();
    int a,b;
    cout<<"Numerele citite:"<<"\n";
    cin>>a>>b;
    cout<<"Cel mai mare divizor comun al celor doua numere citite este "<<auxp1032(a,b);
    cout<<"\n";
}
int auxp1033(int n)
{
    if(n>0)
    {
        if(n%10==0)
        return 1+auxp1033(n/10);
        else
        return auxp1033(n/10);
    }
    else
    return 0;
}
void p1033()
{
    stergere();
    int n;
    cout<<"Numarul citit:"<<"\n";
    cin>>n;
    cout<<"Numarul de cifre egale cu 0 in numarul citit este "<<auxp1033(n);
    cout<<"\n";
}
int auxp1041(int v[],int n)
{
    if(n>=1)
    return v[n]+auxp1041(v,n-1);
    else
    return 0;
}
void p1041()
{
    ///divide et impera are la baza apelarea recursiva a subprogramelor, in functiile auxiliare ale problemelor fiind prezente subprogramele bazate pe divide et impera
    stergere();
    int n,a[1010];
    cout<<"Numarul de elemente din vector:"<<"\n";
    cin>>n;
    cout<<"Elementele vectorului:"<<"\n";
    for(int i=1;i<=n;i++)
    cin>>a[i];
    cout<<"Suma elementelor vectorului este: ";
    cout<<auxp1041(a,n);
    cout<<"\n";
}
int auxp1042(int v[][110],int st,int dr,int sus,int jos)
{
    if(st==dr && sus==jos && v[sus][st]%2==0)
    return v[sus][st];
    if(st==dr && sus==jos)
    return 0;
    if(sus==jos)
    return auxp1042(v,(st+dr)/2+1,dr,sus,jos)+auxp1042(v,st,(st+dr)/2,sus,jos);
    if(st==dr)
    return auxp1042(v,st,dr,(sus+jos)/2+1,jos)+auxp1042(v,st,dr,sus,(sus+jos)/2);
    return auxp1042(v,(st+dr)/2+1,dr,(sus+jos)/2+1,jos)+auxp1042(v,(st+dr)/2+1,dr,sus,(sus+jos)/2)+auxp1042(v,st,(st+dr)/2,(sus+jos)/2+1,jos)+auxp1042(v,st,(st+dr)/2,sus,(sus+jos)/2);
}
void p1042()
{
    stergere();
    int n,m,a[110][110];
    cout<<"Dimensiunile matricii sunt:"<<"\n";
    cin>>n>>m;
    cout<<"Elementele matricii sunt:"<<"\n";
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
        cin>>a[i][j];
    cout<<"Suma numerelor pare in matrice este: ";
    cout<<auxp1042(a,1,m,1,n)<<"\n";
}
int auxpprim1043(int x) ///subprogram de verificare a unui numar daca este prim sau nu
{
    if(x<=1)
    return 0;
    for(int i=2;i*i<=x;i++)
    if(x%i==0)
    return 0;
    return 1;
}
int auxp1043(int a[],int st,int dr)
{
    if(st==dr)
    return auxpprim1043(a[st]);
    else
    return auxp1043(a,st,(st+dr)/2)+auxp1043(a,(st+dr)/2+1,dr);
}
void p1043()
{
    stergere();
    int n,a[201];
    cout<<"Numarul de elemente din vector:"<<"\n";
    cin>>n;
    cout<<"Elementele vectorului:"<<"\n";
    for(int i=1;i<=n;i++)
    cin>>a[i];
    if(auxp1043(a,1,n)==0)
    cout<<"In sir nu sunt numere prime";
    else
    cout<<"In sir sunt numere prime";
    cout<<"\n";
}
void auxp1044(int v[],int st,int dr)
{ ///algoritmul de sorate qucik sort este bazat pe metoda divide et impera
    if(st<dr)
    {
        int m=(st+dr)/2;
        swap(v[st],v[m]);
        int i=st,j=dr,d=0;
        while(i<j)
        {
            if(v[i]>v[j])
            {
                swap(v[i],v[j]);
                d=1-d;
            }
            i=i+d;
            j=j-(1-d);
        }
        auxp1044(v,st,i-1);
        auxp1044(v,i+1,dr);
    }
}
void p1044()
{
    stergere();
    int a[100010],n;
    cout<<"Numarul de elemente din vector:"<<"\n";
    cin>>n;
    cout<<"Elementele vectorului care trebuie sortat:"<<"\n";
    for(int i=1;i<=n;i++)
    cin>>a[i];
    auxp1044(a,1,n);
    cout<<"Vectorul sortat este:"<<"\n";
    for(int i=1;i<=n;i++)
    cout<<a[i]<<" ";
    cout<<"\n";
}
int dl[4]={-1,0,1,0};
int dc[4]={0,1,0,-1};
int a[1010][1010],startl,startc,n,m;
struct pct ///definim un punct din matricea data
{
    int l,c;
};
void p10511()
{
    ofstream gout("p1051.out");
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        if(i==startl && j==startc)
        gout<<0<<" ";
        else
        if(a[i][j]==0)
        gout<<-1<<" ";
        else
        gout<<a[i][j]<<" ";
        gout<<"\n";
    }
    gout.close();
}
void p10512()
{
    ifstream fin("p1051.in");
    fin>>n>>m;
    fin.get();
    char c[1010][1010];
    for(int i=1;i<=n;i++)
    fin.getline(c[i],m+1);
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(c[i][j]=='P')
            {
                startl=i;
                startc=j+1;
                a[i][j+1]=0;
            }
            else
            if(c[i][j]=='-')
            a[i][j+1]=0;
            else
            if(c[i][j]=='#')
            a[i][j+1]=-1;
        }
    }
    fin.close();
}
bool p10513(int i,int j)
{
    if(a[i][j]==-1 || i>n || j>m || i<1 || j<1)
    return false;
    return true;
}
#include <queue>
queue <pct> q;
void p10514()
{
    int i,j,ix,jx;
    i=startl;
    j=startc;
    a[i][j]=0;
    pct aux;
    aux.l=i;
    aux.c=j;
    q.push(aux);
    while(!q.empty())
    {
        i=q.front().l;
        j=q.front().c;
        q.pop();
        for(int k=0;k<4;k++)
        {
            ix=i+dl[k];
            jx=j+dc[k];
            if(p10513(ix,jx)==true && a[ix][jx]<1)
            {
                a[ix][jx]=a[i][j]+1;
                aux.l=ix;
                aux.c=jx;
                q.push(aux);
            }
        }
    }
}
void p1051()
{
    stergere();
    cout<<"Se consideră o clădire de formă dreptunghiulară, împărțită în n*m camere, dispuse sub forma unei matrice cu n linii și m coloane.\n Dintr-o cameră se poate trece în oricare dintre cele 4 camere vecine"<<"\n";
    cout<<"pe linie sau pe coloană. Unele camere sunt închise, și în ele nu se poate intra deloc. Trecerea dintr-o cameră în altă cameră durează un minut."<<"\n";
    cout<<"In una dintre camere se află proprietarul clădirii, care dorește să afle, pentru fiecare dintre camere care este timpul minim necesar pentru a ajunge în acea cameră."<<"\n";
    ///in cadrul acestei probleme vor fi mai multe subprograme care vor fi notate cu p10511 -> p10514
    p10512();
    p10514();
    p10511();
    cout<<"\n";
}
bool p10522(int i,int j,int a[][1010])
{
    if(i<1 || j<1 || i>n || j>m || a[i][j]!=0)
    return false;
    return true;
}

void p10521(int startl,int startc,int stopl,int stopc,int a[][1010])
{
    queue <pct> q;
    int dl[8]={-1,-1,-1,0,1,1,1,0};
    int dc[8]={-1,0,1,1,1,0,-1,-1};
    int ix,jx,i,j;
    pct aux;
    aux.l=startl;
    aux.c=startc;
    q.push(aux);
    while((!q.empty()) && a[stopl][stopc]==0)
    {
        i=q.front().l;
        j=q.front().c;
        q.pop();
        for(int k=0;k<8;k++)
        {
            ix=i+dl[k];
            jx=j+dc[k];
            if(p10522(ix,jx,a)==true)
            {
                a[ix][jx]=a[i][j]+1;
                aux.l=ix;
                aux.c=jx;
                q.push(aux);
            }
        }
    }
}
void p1052()
{
    stergere();
    ///in cadrul acestei probleme vor fi mai multe subprograme care vor fi notate cu p20511 -> p10512
    ifstream f("p1052.in");
    int n,m,k,a[1010][1010],startl,startc,stopl,stopc,ietil,ietic,bigl,bigc;
    stergere();
    cout<<"Cunoscând suprafața regiunii în care se află Gigel și casa acestuia (care poate fi reprezentată printr-un tablou bidimensional \ncu n linii și m coloane, în care fiecare zonă are coordonatele x și y), coordonatele casei (X1, Y1) și coordonatele locului de popas (X2, Y2), \ncoordonatele zonelor în care locuiesc Yeti (XY, YY) și Bigfoot (XB, YB), precum și cele K perechi de coordonate (X, Y)"<<"\n";
    cout<<"ale zonelor în care locuiesc vârcolacii, se cere să îl ajutați pe Gigel să găsească lungimea D a celui mai scurt drum spre casă."<<"\n";
    f>>n>>m>>k>>startl>>startc>>stopl>>stopc>>ietil>>ietic>>bigl>>bigc;
    a[ietil][ietic]=-1;
    a[bigl][bigc]=-1;
    for(int i=1;i<=k;i++)
    {
        int x,y;
        f>>x>>y;
        a[x][y]=-1;
    }
    f.close();
    ofstream g("p1052.out");
    p10521(startl,startc,stopl,stopc,a);
    g<<a[stopl][stopc];
    g.close();
    cout<<"\n";
}
void AlgoritmiElementari()
{
    system("cls");
    int x,p;
    do
    {
        cout<<"Algoritmi elementari:"<<"\n"<<"\n"<<"\n";
        cout<<"1. Suma cifrelor unui numar"<<"\n";
        cout<<"2. Determinarea maximului unui numar"<<"\n";
        cout<<"3. Divizibilitatea numerelor"<<"\n";
        cout<<"4. Inchide"<<"\n";
        cin>>x;
        if(x==1)
        {
            system("cls");
            do
            {
                cout<<"Suma cifrelor unui numar:"<<"\n"<<"\n"<<"\n";
                cout<<"1. Calculati suma cifrelor unui numar dat."<<"\n";
                cout<<"2. Sa se scrie un program care sa determine"<<"\n"<<"oglinditul unui numar natural citit de la tastatura."<<"\n";
                cout<<"3. Sa se scrie un program care sa determine"<<"\n"<<"ultima cifra para a unui numar natural citit de la tastatura."<<"\n";
                cout<<"4. Scrieti un program care inlocuieste"<<"\n"<<"in numarul n toate aparitiile cifrei  c1 cu c2."<<"\n";
                cout<<"5. Inchide"<<"\n";
                cin>>p;
                if(p==1)
                p111();
                else
                if(p==2)
                p112();
                else
                if(p==3)
                p113();
                else
                if(p==4)
                p114();
                else
                if(p>4)
                {
                    x=0;
                    system("cls");
                }
            }
            while(p>=1 && p<=4);
        }
        else
        if(x==2)
        {
            system("cls");
            do
            {
                cout<<"Determinarea maximului unui numar:"<<"\n"<<"\n"<<"\n";
                cout<<"1. Se dau n numere intregi. Calculati cel mai mare dintre cele n numere date."<<"\n";
                cout<<"2. Sa se scrie un program care citeste un sir"<<"\n"<<"de n numere naturale si determina numarul din sir care are prima cifra minima."<<"\n";
                cout<<"3. Sa se scrie un program care citeste un sir"<<"\n"<<"de n numere naturale si determina valoarea maxima din sir si de cate ori apare."<<"\n";
                cout<<"4. Sa se scrie un program care citeste un sir"<<"\n"<<"de n numere naturale si determina cele mai mari doua numere din sir."<<"\n";
                cout<<"5. Inchide"<<"\n";
                cin>>p;
                if(p==1)
                p121();
                else
                if(p==2)
                p122();
                else
                if(p==3)
                p123();
                else
                if(p==4)
                p124();
                else
                if(p>4)
                {
                    x=0;
                    system("cls");
                }
            }
            while(p>=1 && p<=4);
        }
        else
        if(x==3)
        {system("cls");
            do
            {
                cout<<"Divizibilitatea numerelor:"<<"\n"<<"\n"<<"\n";
                cout<<"1. Se citeste un numar n. Sa se afiseze divizorii sai."<<"\n";
                cout<<"2. Se citeste un numar natural n. Sa se determine suma divizorilor sai."<<"\n";
                cout<<"3. Fie 2 numere. Sa se afiseze divizorii lor comuni."<<"\n";
                cout<<"4. Fie n numere naturale. Determinati cate dintre ele au proprietatea ca sunt prime cu oglinditul lor."<<"\n";
                cout<<"5. Inchide"<<"\n";
                cin>>p;
                if(p==1)
                p131();
                else
                if(p==2)
                p132();
                else
                if(p==3)
                p133();
                else
                if(p==4)
                p134();
                else
                if(p>4)
                {
                    x=0;
                    system("cls");
                }
            }
            while(p>=1 && p<=4);
        }
        else
        if(x>3)
        {
            n=0;
            system("cls");
        }
    }
    while(x<=3 && x>=0);
}
void Vectori()
{
    system("cls");
    int x,p;
    do
    {
        cout<<"Vectori:"<<"\n"<<"\n"<<"\n";
        cout<<"1. Citirea si parcurgerea vectorilor"<<"\n";
        cout<<"2. Stergeri si inserari de elemente in vector"<<"\n";
        cout<<"3. Verificarea unor proprietati"<<"\n";
        cout<<"4. Sortarea vectorilor"<<"\n";
        cout<<"5. Vectori de frecventa si caracteristici"<<"\n";
        cout<<"6. Inchide"<<"\n";
        cin>>x;
        if(x==1)
        {
            system("cls");
            do
            {
                cout<<"Citirea si parcurgerea vectorilor:"<<"\n"<<"\n"<<"\n";
                cout<<"1. Se citeste un vector cu n elemente. Sa se afiseze valoarea maxima din vector"<<"\n";
                cout<<"2. Se citeste un vector cu n elemente. Sa se afiseze elementele din vector"<<"\n"<<"care sunt multimpli ai ultimului element"<<"\n";
                cout<<"3. Se citeste un vector cu n elemente. Sa se determine indicele maximului si minimului din vector. "<<"\n";
                cout<<"4. Fie un vector cu n numere intregi. Determinati cate dintre numere apar o singura data."<<"\n";
                cout<<"5. Inchide"<<"\n";
                cin>>p;
                if(p==1)
                p211();
                else
                if(p==2)
                p212();
                else
                if(p==3)
                p213();
                else
                if(p==4)
                p214();
                else
                if(p>4)
                {
                    x=0;
                    system("cls");
                }
            }
            while(p>=1 && p<=4);
        }
        else
        if(x==2)
        {
            system("cls");
            do
            {
                cout<<"Stergeri si inserari de elemente in vector:"<<"\n"<<"\n"<<"\n";
                cout<<"1. Sa se stearga dintr-un vector cu n elemente numarul de pe o pozitie data."<<"\n";
                cout<<"2. Sa se stearga dintr-un vector toate elementele care sunt prime."<<"\n";
                cout<<"3. Sa se insereze pe o pozitie data intr-un vector o valoare precizata."<<"\n";
                cout<<"4. Intr-un sir, sa se insereze inatintea fiecarui element care este patrat perfect radacina sa patrata."<<"\n";
                cout<<"5. Inchide"<<"\n";
                cin>>p;
                if(p==1)
                p221();
                else
                if(p==2)
                p222();
                else
                if(p==3)
                p223();
                else
                if(p==4)
                p224();
                else
                if(p>4)
                {
                    x=0;
                    system("cls");
                }
            }
            while(p>=1 && p<=4);
        }
        else
        if(x==3)
        {system("cls");
            do
            {
                cout<<"Verificarea unor proprietati:"<<"\n"<<"\n"<<"\n";
                cout<<"1. Fie un vector cu n elemente in el. Sa se verifice daca in sir exista elemente impare."<<"\n";
                cout<<"2. Se citeste un vector cu n elemente. Sa se verifice daca toate elementele vectorului sunt pare."<<"\n";
                cout<<"3. Fie un vector cu n elemente. Sa se verifice daca are elementele ordonate crescator."<<"\n";
                cout<<"4. Inchide"<<"\n";
                cin>>p;
                if(p==1)
                p231();
                else
                if(p==2)
                p232();
                else
                if(p==3)
                p233();
                else
                if(p>3)
                {
                    x=0;
                    system("cls");
                }
            }
            while(p>=1 && p<=3);
        }
        else
        if(x==4)
        {
            system("cls");
            do
            {
                cout<<"Sortarea vectorilor:"<<"\n"<<"\n"<<"\n";
                cout<<"1. Metodele de sortare."<<"\n";
                cout<<"2. Sa se scrie un program care ordoneaza crescator elementele unui vector."<<"\n";
                cout<<"3. Fie un vector cu n numere naturale. Afisati in ordine crescatoare valorile din vector"<<"\n"<<"care sunt prime cu ultimul element al vectorului "<<"\n";
                cout<<"4. Se da un vector cu n elemente. Ordonati crescator elementele situate inaintea valorii maxime"<<"\n"<<"din vector si descrescator elementele situate dupa aceasta valoare."<<"\n";
                cout<<"5. Sa se scrie un program care ordoneaza crescator un vector prin intermediul sortarii prin selectarea minimului."<<"\n";
                cout<<"6. Sa se sorteze crescator un vector prin metoda insertiei, afisandu-se elementele de pe pozitiile pare. \n Aceasta probleme necesita ca valorile sa fie introduse in fisierele 245.in pentru cele de intrare, afisarea fiind in fisierul 245.out"<<"\n";
                cout<<"7. Sa se determine pozitia unui numar dat dupa sortarea vectorului crescator."<<"\n";
                cout<<"8. Inchide"<<"\n";
                cin>>p;
                if(p==1)
                metodesort();
                if(p==2)
                p242();
                if(p==3)
                p243();
                if(p==4)
                p244();
                if(p==5)
                p245();
                if(p==6)
                p246();
                if(p==7)
                p247();
                else
                if(p>7)
                {
                    x=0;
                    system("cls");
                }
            }
            while(p>=1 && p<=7);
        }
        else
        if(x==5)
        {
            system("cls");
            do
            {
                cout<<"Vectori de frecventa sau caracteristci:"<<"\n"<<"\n"<<"\n";
                cout<<"1. Se dau n cifre zecimale. Sa se afiseze aceste cifre in ordine crescatoare. "<<"\n";
                cout<<"2. Se dau n numere naturale. Determinati cele mai mari doua numere cu trei cifre care nu apar printre numerele date."<<"\n";
                cout<<"3. Andrei lucreaza intr-un magazin de sosete, iar fiecare soseta are asociat un numar intreg"<<"\n"<<"pentru a o identifica mai usor din ce model face parte. Dandu-se un vector neordonat"<<"\n"<<"de astfel de coduri, aflati cate perechi de sosete se pot forma."<<"\n";
                cout<<"4. Se da un vector cu n numere naturale. Sa se determine cate dintre perechile"<<"\n"<<"de elemente din vector sunt formate din valori cu aceeasi suma a cifrelor."<<"\n";
                cout<<"5. Inchide"<<"\n";
                cin>>p;
                if(p==1)
                p251();
                else
                if(p==2)
                p252();
                else
                if(p==3)
                p253();
                else
                if(p==4)
                p254();
                else
                if(p>4)
                {
                    x=0;
                    system("cls");
                }
            }
            while(p>=1 && p<=3);
        }
        else
        if(x>5)
        {
            n=0;
            system("cls");
        }
    }
    while(x<=5 && x>=0);
}
void Matrici()
{
    system("cls");
    int x,p;
    do
    {
        cout<<"Matrici"<<"\n";
        cout<<"1. Matrici oarecare"<<"\n";
        cout<<"2. Matrici patratice"<<"\n";
        cout<<"3. Generari de matrici"<<"\n";
        cout<<"4. Inchide"<<"\n";
        cin>>x;
        if(x==1)
        {
            system("cls");
            do
            {
                cout<<"1. Sa se determine suma elementelor pare dintr-o matrice cu n linii si m coloane"<<"\n";
                cout<<"2. Sa se calculeze suma elementelor de pe fiecare linie dintr-o matrice cu n linii si m coloane "<<"\n";
                cout<<"3. Sa se ordoneze liniile unei matrici crescator dupa suma elementelor, matricea avand n linii si m coloane"<<"\n";
                cout<<"4. Se dă o matrice cu n linii şi m coloane şi elemente numere naturale. Să se determine elementul cu număr maxim de apariții în matrice."<<"\n"<<"Dacă există mai multe elemente cu număr maxim de apariții se va afișa cel mai mare dintre ele."<<"\n";
                cout<<"5. Inchide"<<"\n";
                cin>>p;
                if(p==1)
                p311();
                else
                if(p==2)
                p312();
                else
                if(p==3)
                p313();
                else
                if(p==4)
                p314();
                else
                if(p>4)
                {
                    x=0;
                    system("cls");
                }
            }
            while(p>=1 && p<=4);
        }
        else
        if(x==2)
        {
            system("cls");
            do
            {
                cout<<"1. Calculaţi diferenţa în valoare absolută dintre sumele elementelor de pe cele două diagonale ale unei matrici cu n linii si n coloane."<<" \n";
                cout<<"2. Afisati pe ecran numarul valorilor din matrice care sunt strict mai mari decat toti vecinii lor, matrice care are n linii si n coloane."<<"\n";
                cout<<"3. Afisati elementele care se afla pe diagonala principala intr-o matrice cu n linii si n coloane"<<"\n";
                cout<<"4. Afisati elementele care se afla pe diagonala secundara intr-o matrice cu n linii si n coloane"<<"\n";
                cout<<"5. Inchide"<<"\n";
                cin>>p;
                if(p==1)
                p321();
                else
                if(p==2)
                p322();
                else
                if(p==3)
                p323();
                else
                if(p==4)
                p324();
                else
                if(p>4)
                {
                    x=0;
                    system("cls");
                }
            }
            while(p>=1 && p<=4);
        }
        else
        if(x==3)
        {system("cls");
            do
            {
                cout<<"1. Scrieţi un program care citeşte de la tastatura doua numere naturale nenule n si m si care construieste in memorie si apoi afiseaza o matrice A cu n linii (numerotate de la 1 la n) si m coloane (numerotate de la 1 la m) cu proprietatea ca fiecare element  Aij memoreaza cea mai mica dintre valorile indicilor i si j."<<"\n";
                cout<<"2. Scrieti un program care citeste de la tastatura doua numere naturale nenule n si m si construieste in memorie o matrice cu n linii si m coloane astfel incat, parcurgand tabloul linie cu linie de sus in jos si fiecare linie de la stanga la dreapta, ss se obtina sirul primelor  n*m patrate perfecte impare , ordonat strict crescator."<<"\n";
                cout<<"3. Inchide"<<"\n";
                cin>>p;
                if(p==1)
                p331();
                else
                if(p==2)
                p332();
                else
                if(p>2)
                {
                    x=0;
                    system("cls");
                }
            }
            while(p>=1 && p<=2);
        }
        else
        if(x>3)
        {
            n=0;
            system("cls");
        }
    }
    while(x<=3 && x>=0);
}
void subp1()
{
    stergere();
    int x;
    do
    {
        cout<<"Subprograme care returneaza valori"<<"\n";
        cout<<"1. Sa se scrie o functie C++ care sa returneze pentru un numar natural n transmis ca parametru valoarea lui n!"<<"\n";
        cout<<"2. Sa se scrie o functie C++ care sa returneze suma cifrelor unui numar natural transmis ca parametru."<<"\n";
        cout<<"3. Sa se scrie o functie C++ care sa returneze oglinditul unui numar natural transmis ca parametru."<<"\n";
        cout<<"4. Inchide"<<"\n";
        cin>>x;
        if(x==1)
        p10111();
        else
        if(x==2)
        p10112();
        else
        if(x==3)
        p10113();
        else
        if(x>3)
        {
            n=0;
            system("cls");
        }
    }while(x>=1 && x<=3);
}
void subp2()
{
    stergere();
    int x;
    do
    {
        cout<<"Subprograme care intorc valori prin parametri"<<"\n";
        cout<<"1. Sa se scrie o functie C++ care sa determine oglinditul unui numar natural transmis ca parametru. \nFunctia va intoarce rezultatul prin intermediul unui parametru de iesire."<<"\n";
        cout<<"2. Definiți funcția:"<<"\n";
        cout<<"void FRadical(int n, int &x, int &y)"<<"\n";
        cout<<"cu parametrii: n, prin care primeste un numar natural de tip int, \nx si y – doua numere naturale care se determina, cu proprietatea ca x2 * y = n, iar x este maxim posibil"<<"\n";
        cout<<"3. Subprogramul Impare are un singur parametru, n, prin care primeste un numar natural. \nSubprogramul inlocuieste fiecare cifra impara a lui n cu cea mai mare cifra para strict mai mica decat ea \nsi furnizeaza numarul obtinut tot prin parametrul n."<<"\n";
        cout<<"4. Inchide"<<"\n";
        cin>>x;
        if(x==1)
        p10121();
        else
        if(x==2)
        p10122();
        else
        if(x==3)
        p10123();
        else
        if(x>3)
        {
            n=0;
            system("cls");
        }
    }while(x>=1 && x<=3);
}
void subp3()
{
    stergere();
    int x;
    do
    {
        cout<<"Subprograme care prelucreaza tablouri"<<"\n";
        cout<<"1. Scrieti definitia completa unui subprogram care realizeaza stergerea \ndintr-un tablou unidimensional dat a elementelor cu indici intre doua valori date"<<"\n";
        cout<<"2. Să se scrie funcția cu următorul antet:"<<"\n";
        cout<<"void Insert(int a[], int &n)"<<"\n";
        cout<<"Functia primeste ca parametri un vector a de numere naturale si \nn - numarul elementelor vectorului. Sa se insereze dupa fiecare numar impar dublul sau."<<"\n";
        cout<<"3.Scrieți definiția completă subprogramului C++ afismat care afișează pe ecran elementele unui tablou bidimensional."<<"\n";
        cout<<"4. Inchide"<<"\n";
        cin>>x;
        if(x==1)
        p10131();
        else
        if(x==2)
        p10132();
        else
        if(x==3)
        p10133();
        else
        if(x>3)
        {
            n=0;
            system("cls");
        }
    }while(x>=1 && x<=3);
}
void Subprograme()
{
    stergere();
    int x;
    do
    {
        cout<<"Subprograme"<<"\n";
        cout<<"1. Subprograme care returneaza valori"<<"\n";
        cout<<"2. Subprograme care intorc valori prin parametri"<<"\n";
        cout<<"3. Subprograme care prelucreaza tablouri"<<"\n";
        cout<<"4. Inchide"<<"\n";
        cin>>x;
        if(x==1)
        subp1();
        else
        if(x==2)
        subp2();
        else
        if(x==3)
        subp3();
        else
        if(x>3)
        {
            n=0;
            system("cls");
        }
    }while(x>=1 && x<=3);
}
void sirc1()
{
    stergere();
    int x;
    do
    {
        cout<<"Prelucrari elementare pe siruri de caractere"<<"\n";
        cout<<"1. Se da un sir de caractere. Sa se determine cate vocale din sir sunt cuprinse intre doua consoane."<<"\n";
        cout<<"2. Sa se scrie un program care citeste un sir de caractere format din litere mici ale alfabetului englez \nsi inlocuieste fiecare vocala cu litera mare corespunzatoare."<<"\n";
        cout<<"3. Sa se scrie un program care sa afiseze prefixele si sufixele unui cuvant citit."<<"\n";
        cout<<"4. Inchide"<<"\n";
        cin>>x;
        if(x==1)
        p10211();
        else
        if(x==2)
        p10212();
        else
        if(x==3)
        p10213();
        else
        if(x>3)
        {
            n=0;
            system("cls");
        }
    }while(x>=1 && x<=3);
}
void sirc2()
{
    stergere();
    int x;
    do
    {
        cout<<"Functii predefinite cu siruri de caractere"<<"\n";
        cout<<"1. Se da o propozitie care contine numai litere mici \nale alfabetului englez si spatii. Sa se afiseze cuvintele din propozitie care contin numai vocale."<<"\n";
        cout<<"2. Se da o propozitie formata din litere mici ale \nalfabetului englez, spatii si semnele de punctuatie ,.. Determinati un cuvant palindrom din propozitie, primul in ordine alfabetica."<<"\n";
        cout<<"3. Se dau 2 siruri de caractere. Sa se afiseze toate caracterele primului sir ce se gasesc si in al doilea."<<"\n";
        cout<<"4. Inchide";
        cin>>x;
        if(x==1)
        p10221();
        else
        if(x==2)
        p10222();
        else
        if(x==3)
        p10223();
        else
        if(x>3)
        {
            n=0;
            system("cls");
        }
    }while(x>=1 && x<=3);
}
void SiruriCaract()
{
    stergere();
    int x;
    do
    {
        cout<<"Siruri de caractere"<<"\n";
        cout<<"1. Prelucrari elementare pe siruri de caractere"<<"\n";
        cout<<"2. Functii predefinite pe siruri de caractere (cu cstring)"<<"\n";
        cout<<"3. Inchide"<<"\n";
        cin>>x;
        if(x==1)
        sirc1();
        else
        if(x==2)
        sirc2();
        else
        if(x>2)
        {
            n=0;
            system("cls");
        }
    }while(x>=1 && x<=2);
}
void Recursivitate()
{
    stergere();
    int x;
    do
    {
        cout<<"Subprograme recursive"<<"\n";
        cout<<"1. Sa se scrie o functie recursiva care returneaza factorialul unui numar dat ca parametru"<<"\n";
        cout<<"2. Sa se scrie o functie recursiva care returneaza cel mai mare divizor comun a doua numere transmise ca parametri"<<"\n";
        cout<<"3. Sa se scrie o functie recursiva care sa returneze numarul de cifre egal cu zero ale unui numar transmis ca parametru"<<"\n";
        cout<<"4. Inchide"<<"\n";
        cin>>x;
        if(x==1)
        p1031();
        else
        if(x==2)
        p1032();
        else
        if(x==3)
        p1033();
        else
        if(x>3)
        {
            n=0;
            system("cls");
        }
    }while(x>=1 && x<=3);
}
void DivideEtImpera()
{
    stergere();
    int x;
    do
    {
        cout<<"Divide Et Impera"<<"\n";
        cout<<"1. Se considera un sir cu n elemente, numere naturale. \nFolosind metoda Divide et Impera, determinati suma elementelor acestui sir."<<"\n";
        cout<<"2. Se considera o matrice cu m linii si n coloane, numere naturale. \nFolosind metoda Divide et Impera, determinati suma numerelor pare din matrice."<<"\n";
        cout<<"3. Se da un sir cu n elemente, numere naturale. Folosind metoda \nDivide et Impera sa se verifice daca in sir exista elemente prime."<<"\n";
        cout<<"4. Se da un sir cu n elemente, numere intregi. Folosind metoda QuickSort (Sortare Rapida), ordonati crescator elementele acestui sir."<<"\n";
        cout<<"5. Revenire la Clasa a 10-a"<<"\n";
        cin>>x;
        if(x==1)
        p1041();
        else
        if(x==2)
        p1042();
        else
        if(x==3)
        p1043();
        else
        if(x==4)
        p1044();
        else
        if(x>4)
        {
            x=0;
            system("cls");
        }
    }while(x<=4 && x>0);
}
void Lee()
{
    stergere();
    int x;
    do
    {
        cout<<"Algoritmul lui Lee"<<"\n";
        cout<<"1. Sub forma de algoritm de Fill - fisiere"<<"\n";
        cout<<"2. Sub forma de algoritm de parcurgere - fisiere"<<"\n";
        cout<<"3. Revenire la Clasa a 10-a"<<"\n";
        cin>>x;
        if(x==1)
        p1051();
        else
        if(x==2)
        p1052();
        else
        if(x>2)
        {
            x=0;
            system("cls");
        }
    }
    while(x>0 && x<=2);
}
struct nod{
   int info;
   nod *urm;
};
void coada1()
{
    stergere();
    cout<<"Ideea de coada coada merge pe principiul FIFO - First in, First out."<<"\n";
    cout<<"Sub forma de cod asa ar arata o creare noua de stiva:"<<"\n";
    cout<<"for(int i=1;i<=n;i++){ - numarul de elemente din coada"<<"\n";
    cout<<"if(i==1){ - daca dam de primul element, situatie in care coada nu este creata"<<"\n";
    cout<<"p=new nod; - p reprezinta primul element, iar nod reprezinta structura de date specifica alocarii dinamice"<<"\n";
    cout<<"cin>>p->info; - folosim operatorul -> pentru a introduce valori in variabila memorata la adresa p"<<"\n";
    cout<<"p->urm=NULL; - in caz de avem un singur element, marcam finalul cozii cu NULL"<<"\n";
    cout<<"q=p;} - plasam ultimul element la adresa primului"<<"\n";
    cout<<"else{"<<"\n";
    cout<<"q=new nod; - alocam un nou segment de date unei noi variabile daca avem in continuare elemente in lista"<<"\n";
    cout<<"cin>>q->info; - citim in q cu operatorul -> informatia care trebuie retinuta"<<"\n";
    cout<<"u->urm=q; - facem legatura intre ultimul element si noul element"<<"\n";
    cout<<"u=q; - punem ultimul element sa fie chiar elementul pe care tocmai l-am creat"<<"\n";
    cout<<"q->urm=NULL;} - in caz ca nu mai avem elemente, marcam finalul cozii"<<"\n";
}
void coada2()
{
    stergere();
    cout<<"Sa se afiseze sub forma de coada elementele citite\n";
    int n;
    nod *p,*q,*u;
    cout<<"Numarul de elemente care trebuie citite:"<<"\n";
    cin>>n;
    cout<<"Elementele care trebuie citite:"<<"\n";
    for(int i=1;i<=n;i++)
    {
        if(i==1)
        {
            p=new nod;
            cin>>p->info;
            p->urm=NULL;
            u=p;
        }
        else
        {
            q=new nod;
            cin>>q->info;
            u->urm=q;
            u=q;
            u->urm=NULL;
        }
    }
    cout<<"Elementele din sirul citit afisate sub forma de coada sunt:"<<"\n";
    for(q=p;q!=NULL;q=q->urm)
    cout<<q->info<<" ";
    cout<<"\n";
}
void stiva1()
{
    stergere();
    cout<<"Ideea de stiva merge pe principiul FILO - First in, Last out"<<"\n";
    cout<<"Un exemplu de implementare de stiva este:"<<"\n";
    cout<<"for(int i=1;i<=n;i++){ - numarul de elemente care trebuie introduse in stiva"<<"\n";
    cout<<"if(i==1){ - daca avem primul element trebuie intai sa construim stiva"<<"\n";
    cout<<"p=new nod; - construim primul element al stivei, care in parcurgere va reprezenta de fapt ultimul element"<<"\n";
    cout<<"p->urm=NULL; - marcam sfarsitul stivei"<<"\n";
    cout<<"cin>>p->info; - citim informatia pe care vrem sa o memoram in acel segment de stiva"<<"\n";
    cout<<"u=p;} - plasam ultimul element pe aceeasi pozitie cu primul element"<<"\n";
    cout<<"else{"<<"\n";
    cout<<"q=new nod; - cream noul segment de stiva pe care vrem dupa sa il alaturam cu celalalt segment de stiva"<<"\n";
    cout<<"cin>>q->info; - citim informatia pe care vrem sa o memoram in noul segment de stiva"<<"\n";
    cout<<"q->urm=u; - alaturam noul element de segmentul de stiva construit dupa principiul FILO"<<"\n";
    cout<<"u=q;} - alaturam ultimul element de noul element, in contextul stivei ultimul element reprezentand primul element din parcurgere"<<"\n";
}
void stiva2()
{
    stergere();
    cout<<"Sa se afiseze sub forma de stiva elementele unui sir descrescator"<<"\n";
    int n;
    nod *p,*u,*q;
    cout<<"Numarul de elemente care trebuie citite:"<<"\n";
    cin>>n;
    cout<<"Elementele care trebuie citite:"<<"\n";
    for(int i=1;i<=n;i++)
    {
        if(i==1)
        {
            p=new nod;
            p->urm=NULL;
            cin>>p->info;
            u=p;
        }
        else
        {
            q=new nod;
            cin>>q->info;
            q->urm=u;
            u=q;
        }
    }
    cout<<"Elementele din sirul descrescator afisate sub forma de stiva sunt:"<<"\n";
    for(q=u;q!=NULL;q=q->urm)
    cout<<q->info<<" ";
    cout<<"\n";
}
void liste1()
{
    stergere();
    int x;
    do
    {
        cout<<"Liste simplu inlantuite"<<"\n";
        cout<<"Coada:"<<"\n";
        cout<<"1. Teorie"<<"\n";
        cout<<"2. Problema"<<"\n";
        cout<<"Stiva:"<<"\n";
        cout<<"3. Teorie"<<"\n";
        cout<<"4. Problema"<<"\n";
        cout<<"5. Revenire la Liste"<<"\n";
        cin>>x;
        if(x==1)
        coada1();
        else
        if(x==2)
        coada2();
        else
        if(x==3)
        stiva1();
        else
        if(x==4)
        stiva2();
        if(x>4)
        {
            x=0;
            system("cls");
        }
    }
    while(x>0 && x<=4);
}
struct nod2{
    int info;
    nod2 *st,*dr;
};
void liste2()
{
    cout<<"Liste dublu inlantuite"<<"\n";
    cout<<"Listele dublu inlantuite adauga spre deosebire de cele simplu inlantuite abilitatea de a parcurge lista din ambele directii:\nsi de la stanga la dreapta, si de la dreapta la stanga"<<"\n";
    cout<<"Exemplu problema: Sa se afiseze elementele unei liste de la stanga la dreapta, \nsi de la dreapta la stanga, fara a se schimba tipul de lista dat"<<"\n";
    int n;
    nod2 *p,*q,*u;
    cout<<"Numarul de elemente din lista:"<<"\n";
    cin>>n;
    cout<<"Elementele listei:"<<"\n";
    for(int i=1;i<=n;i++)
    {
        if(i==1)
        {
            p=new nod2;
            p->st=NULL;
            p->dr=NULL;
            cin>>p->info;
            u=p;
        }
        else
        {
            q=new nod2;
            u->dr=q;
            q->st=u;
            q->dr=NULL;
            cin>>q->info;
            u=q;
        }
    }
    cout<<"Afisarea de la stanga la dreapta"<<"\n";
    for(q=p;q!=NULL;q=q->dr)
    cout<<q->info<<" ";
    cout<<"\n";
    cout<<"Afisarea de la dreapta la stanga"<<"\n";
    for(q=u;q!=NULL;q=q->st)
    cout<<q->info<<" ";
    cout<<"\n";
}
void Liste()
{
    stergere();
    int x;
    do
    {
        cout<<"Alocare dinamica - Liste"<<"\n";
        cout<<"1. Liste simplu inlantuite"<<"\n";
        cout<<"2. Liste dublu inlantuite"<<"\n";
        cout<<"3. Revenire la Clasa a 10-a"<<"\n";
        cin>>x;
        if(x==1)
        liste1();
        else
        if(x==2)
        liste2();
        else
        if(x>2)
        {
            x=0;
            system("cls");
        }
    }
    while(x>0 && x<=2);
}
void cls9()
{
    stergere();
    int x;
    do
    {
        cout<<"Clasa a 9-a"<<"\n";
        cout<<"1. Algoritmi elementari"<<"\n";
        cout<<"2. Vectori"<<"\n";
        cout<<"3. Matrici"<<"\n";
        cout<<"4. Inchide"<<"\n";
        cin>>x;
        if(x==1)
        AlgoritmiElementari();
        else
        if(x==2)
        Vectori();
        else
        if(x==3)
        Matrici();
        else
        if(x>3)
        {
            x=0;
            system("cls");
        }
    }while(x<=3 && x>0);
}
void cls10()
{
    stergere();
    int x;
    do
    {
        cout<<"Clasa a 10-a"<<"\n";
        cout<<"1. Subprograme"<<"\n";
        cout<<"2. Siruri de caractere"<<"\n";
        cout<<"3. Recursivitate"<<"\n";
        cout<<"4. Divide Et Impera"<<"\n";
        cout<<"5. Algoritmul lui Lee"<<"\n";
        cout<<"6. Liste (Alocare dinamica)"<<"\n";
        cout<<"7. Inchide"<<"\n";
        cin>>x;
        if(x==1)
        Subprograme();
        else
        if(x==2)
        SiruriCaract();
        else
        if(x==3)
        Recursivitate();
        else
        if(x==4)
        DivideEtImpera();
        else
        if(x==5)
        Lee();
        else
        if(x==6)
        Liste();
        else
        if(x>6)
        {
            x=0;
            system("cls");
        }
    }while(x>0 && x<=6);
}
int main()
{
    int n;
    do
    {
        cout<<"Proiect realizat de Gherca Darius"<<"\n";
        cout<<"1. Clasa a 9-a"<<"\n";
        cout<<"2. Clasa a 10-a"<<"\n";
        cout<<"3. Inchidere program"<<"\n";
        cin>>n;
        if(n==1)
        cls9();
        else
        if(n==2)
        cls10();
    }while(n<=2 && n>=0);
    return 0;
}
