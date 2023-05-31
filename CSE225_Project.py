import math
def main():

    int ite;
    double ans, error, in_value, a, b, c, an
    double  t, x, y, z, result
    t=input("Enter Initial Temperature: ")
    #ite=input("\nEnter Iteration Number: ")
    ite=5;
    print (\n)
    for i in range (0,ite):

        a=((10**(-9))*(-0.0506))
        b=((10**(-6))*(0.03829))
        c=((10**(-3))*(0.07436))
        an=(a*(t*t*t))+(b*(t*t))+(c*t)+0.00907

        x=((10**(-9))*(-0.0506))
        y=((10**(-6))*(0.03829))
        z=((10**(-3))*(0.07436))
        result=(a*(3*t*t))+(b*(2*t))+(c)

        ans=an/(float(result))
        ans=t-(ans)
        error = ((ans-t)/float(ans))*100
        error = math.fabs(error)
        print "Temperature: ",ans," F"
        print "\n"
        print "Error: ",error,"%"
        print "\n\n\n\n\n\n\n\n"
        t=ans


if __name__=="__main__":
    main()
