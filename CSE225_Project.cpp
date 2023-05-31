#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int ite;
    double ans, error, in_value, a, b, c, an;
    double  t, x, y, z, result;
    cout<<"\n\t\t\tBascule Bridge Problem Solution"<<endl;
    cout<<" _______________________________________________________________________________"<<endl;
    cout<<"\n\n Enter Initial Temperature: ";
    cin>>t;
    cout<<"\n Enter Iteration Number: ";
    cin>>ite;
    cout<<"\n\n\n";
    //ite=5;
    cout<<endl;
    for(int i=0; i<ite; i++)
    {

        a=(pow(10,(-9))*(-0.0506));
        b=(pow(10,(-6))*(0.03829));
        c=(pow(10,(-3))*(0.07436));
        an=(a*(t*t*t))+(b*(t*t))+(c*t)+0.00907;

        x=(pow(10,(-9))*(-0.0506));
        y=(pow(10,(-6))*(0.03829));
        z=(pow(10,(-3))*(0.07436));
        result=(a*(3*t*t))+(b*(2*t))+(c);

        ans=an/(float(result));
        ans=t-(ans);
        error = ((ans-t)/float(ans))*100;
        error = fabs(error);
        cout<<" Iteration Number: "<<i+1;
        cout<<"\tTemperature: "<<ans<<" F"<<endl;;
        cout<<"\t\t\tError: "<<error<<"%";
        cout<<"\n\n _______________________________________________________________________________\n"<<endl;
        t=ans;
    }
    cout<<"\n\n\n\n\n\n";
    cout<<"\t\t\t\t\t\t\t\tPrepared by-";
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\tMehedi Hasan Mridha"<<endl;

    return 0;
}
