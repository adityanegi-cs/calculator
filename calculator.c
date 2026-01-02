#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    char again = 'y';

    while (again == 'y' || again == 'Y') {
        printf("\n============ 65-FUNCTION CALCULATOR ============\n");
        printf("1) Add  2) Subtract  3) Multiply  4) Divide\n");
        printf("5) Power  6) Factorial  7) Reverse Number  8) Log10\n");
        printf("9) Cos  10) Sin  11) Tan  12) Acos\n");
        printf("13) Asin  14) Atan  15) Sqrt  16) Cbrt\n");
        printf("17) Square  18) Cube  19) Even/Odd  20) Pos/Neg\n");
        printf("21) Prime Check  22) Primes in Range  23) HCF  24) LCM\n");
        printf("25) Fibonacci  26) Sum of digits  27) Count digits  28) Palindrome Number\n");
        printf("29) Armstrong Number  30) Strong Number  31) Perfect Number\n");
        printf("32) Automorphic Number  33) GCD Submethod  34) Binary to Decimal\n");
        printf("35) Decimal to Binary  36) Octal to Decimal  37) Decimal to Octal  38) Decimal to Hex\n");
        printf("39) Hex to Decimal  40) Celsius to Fahrenheit  41) Fahrenheit to Celsius  42) Simple Interest\n");
        printf("43) Compound Interest  44) Km to Meter  45) Meter to Km  46) Hours to Minutes\n");
        printf("47) Minutes to Hours  48) Percentage  49) Sum of Array  50) Average of Array\n");
        printf("51) Max of Array  52) Min of Array  53) Count Even/Odd in Array  54) Reverse Array\n");
        printf("55) Armstrong in Range  56) Palindrome in Range  57) Strong Number Check  58) Perfect Number Check\n");
        printf("59) Leap Year Check  60) Count Digits in a Number\n");
        printf("61) Rupees to Yen  62) Rupees to Dollar  63) Rupees to Euro\n");
        printf("64) Sum 1 to n  65) Average of n Numbers\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice) {
            case 1: {
                float a,b;
                printf("Input 1st number: ");
                scanf("%f",&a);
                printf("Input 2nd number: ");
                scanf("%f",&b);
                printf("Sum=%.2f\n",a + b);
                break;
            }
            case 2: {
                float a,b;
                printf("Input 1st number: ");
                scanf("%f",&a);
                printf("Input 2nd number: ");
                scanf("%f",&b);
                printf("Difference=%.2f\n",a - b);
                break;
            }
            case 3: {
                float a,b;
                printf("Input 1st number: ");
                scanf("%f",&a);
                printf("Input 2nd number: ");
                scanf("%f",&b);
                printf("Product=%.2f\n",a * b);
                break;
            }
            case 4: {
                float a,b;
                printf("Input 1st number: ");
                scanf("%f",&a);
                printf("Input 2nd number: ");
                scanf("%f",&b);
                if(b != 0)
                    printf("Quotient=%.2f\n", a/b);
                else
                    printf("Cannot divide by zero\n");
                break;
            }
            case 5: {
                float a,b;
                printf("Input 1st number: ");
                scanf("%f",&a);
                printf("Input 2nd number: ");
                scanf("%f",&b);
                printf("Power=%.2f\n",pow(a,b));
                break;
            }
            case 6: {
                int n,i,fact=1;
                printf("Input a number: ");
                scanf("%d",&n);
                for(i=1;i<=n;i++)
                    fact=fact*i;
                printf("Factorial=%d\n",fact);
                break;
            }
            case 7: {
                int n,rev=0,temp;
                printf("Input a number: ");
                scanf("%d",&n);
                temp=n;
                while(temp!=0) {
                    rev=rev*10 + temp%10;
                    temp/=10;
                }
                printf("Reverse=%d\n",rev);
                break;
            }
            case 8: {
                float n;
                printf("Input a positive number: ");
                scanf("%f",&n);
                if(n>0)
                    printf("Log10=%.2f\n",log10(n));
                else
                    printf("Invalid input\n");
                break;
            }
            case 9: {
                float n;
                printf("Input radians value: ");
                scanf("%f",&n);
                printf("Cos=%.2f\n",cos(n));
                break;
            }
            case 10: {
                float n;
                printf("Input radians value: ");
                scanf("%f",&n);
                printf("Sin=%.2f\n",sin(n));
                break;
            }
            case 11: {
                float n;
                printf("Input radians value: ");
                scanf("%f",&n);
                printf("Tan=%.2f\n",tan(n));
                break;
            }
            case 12: {
                float n;
                printf("Input value between -1 and 1: ");
                scanf("%f",&n);
                printf("Acos=%.2f\n",acos(n));
                break;
            }
            case 13: {
                float n;
                printf("Input value between -1 and 1: ");
                scanf("%f",&n);
                printf("Asin=%.2f\n",asin(n));
                break;
            }
            case 14: {
                float n;
                printf("Input a value: ");
                scanf("%f",&n);
                printf("Atan=%.2f\n",atan(n));
                break;
            }
            case 15: {
                float n;
                printf("Input a non-negative number: ");
                scanf("%f",&n);
                if(n>=0)
                    printf("Sqrt=%.2f\n",sqrt(n));
                else
                    printf("Invalid input\n");
                break;
            }
            case 16: {
                float n;
                printf("Input a number: ");
                scanf("%f",&n);
                printf("Cbrt=%.2f\n",cbrt(n));
                break;
            }
            case 17: {
                float n;
                printf("Input a number: ");
                scanf("%f",&n);
                printf("Square=%.2f\n",n*n);
                break;
            }
            case 18: {
                float n;
                printf("Input a number: ");
                scanf("%f",&n);
                printf("Cube=%.2f\n",n*n*n);
                break;
            }
            case 19: {
                int n;
                printf("Input an integer: ");
                scanf("%d",&n);
                if(n % 2 == 0)
                   printf("Even\n");
                else
                   printf("Odd\n");
                break;
            }
            case 20: {
                int n;
                printf("Input an integer: ");
                scanf("%d",&n);
                if(n >= 0)
                   printf("Positive\n");
                else
                   printf("Negative\n");
                break;
            }
            case 21: {
                int n,i,temp=0;
                printf("Input an integer: ");
                scanf("%d",&n);
                if(n > 1){
                    for(i=2;i<=n/2;i++){
                        if(n % i ==0) temp = 1;
                    }
                    if(temp == 0)
                        printf("Prime\n");
                    else
                        printf("Not Prime\n");
                }
                else
                    printf("Not Prime\n");
               break;
            }
            case 22: {
                int a,b,i,j,temp;
                printf("Input range start: ");
                scanf("%d",&a);
                printf("Input range end: ");
                scanf("%d",&b);
                for(i=a;i<=b;i++){
                    temp = 0;
                    if(i>1){
                        for(j=2;j<=i/2;j++){
                            if(i%j==0)
                                temp = 1;
                        }
                    }
                    if(temp==0 && i>1)
                        printf("%d ",i);
                }
                printf("\n");
                break;
            }
            case 23: {
                int a,b,i,hcf=1;
                printf("Input 1st number: ");
                scanf("%d",&a);
                printf("Input 2nd number: ");
                scanf("%d",&b);
                for(i=1;i<=a && i<=b;i++){
                    if(a%i==0 && b%i==0)
                        hcf=i;
                }
                printf("HCF=%d\n",hcf);
                break;
            }
            case 24: {
                int a,b,lcm;
                printf("Input 1st number: ");
                scanf("%d",&a);
                printf("Input 2nd number: ");
                scanf("%d",&b);
                lcm=(a>b)?a:b;
                while(1){
                    if(lcm%a==0 && lcm%b==0) break;
                    lcm++;
                }
                printf("LCM=%d\n",lcm);
                break;
            }
            case 25: {
                int n,i,a=0,b=1,c;
                printf("Input how many Fibonacci numbers: ");
                scanf("%d",&n);
                for(i=1;i<=n;i++){
                    printf("%d ",a);
                    c=a+b;
                    a=b;
                    b=c;
                }
                printf("\n");
                break;
            }
            case 26: {
                int n,sum=0;
                printf("Input a number: ");
                scanf("%d",&n);
                while(n!=0){
                    sum+=n%10;
                    n/=10;
                }
                printf("Sum of digits=%d\n",sum);
                break;
            }
            case 27: {
                int n,count=0;
                printf("Input a number: ");
                scanf("%d",&n);
                while(n!=0){
                    count++;
                    n/=10;
                }
                printf("Digit count=%d\n",count);
                break;
            }
            case 28: {
                int n,r=0,m;
                printf("Input a number: ");
                scanf("%d",&n);
                m=n;
                while(m!=0){
                    r=r*10+m%10;
                    m/=10;
                }
                if(n==r)
                    printf("Palindrome\n");
                else
                    printf("Not Palindrome\n");
                break;
            }
            case 29: {
                int n,sum=0,m;
                printf("Input a number: ");
                scanf("%d",&n);
                m=n;
                while(m!=0){
                    int d=m%10;
                    sum+=d*d*d;
                    m/=10;
                }
                if(sum==n)
                    printf("Armstrong\n");
                else
                    printf("Not Armstrong\n");
                break;
            }
            case 30: {
                int n,sum=0,m,d,i;
                printf("Input a number: ");
                scanf("%d",&n);
                m=n;
                while(m!=0){
                    d=m%10;
                    int f=1;
                    for(i=1;i<=d;i++)
                        f*=i;
                    sum+=f;
                    m/=10;
                }
                if(sum==n)
                    printf("Strong Number\n");
                else
                    printf("Not Strong\n");
                break;
            }
            case 31: {
                int n,sum=0,i;
                printf("Input a number: ");
                scanf("%d",&n);
                for(i=1;i<n;i++){
                    if(n%i==0) sum+=i;
                }
                if(sum==n)
                    printf("Perfect Number\n");
                else
                    printf("Not Perfect\n");
                break;
            }
            case 32: {
                int n,sq;
                printf("Input a number: ");
                scanf("%d",&n);
                sq=n*n;
                if(sq%10==n)
                    printf("Automorphic Number\n");
                else
                    printf("Not Automorphic\n");
                break;
            }
            case 33: {
                int a,b,i,gcd=1;
                printf("Input 1st number: ");
                scanf("%d",&a);
                printf("Input 2nd number: ");
                scanf("%d",&b);
                for(i=1;i<=a && i<=b;i++){
                    if(a%i==0 && b%i==0) gcd=i;
                }
                printf("GCD=%d\n",gcd);
                break;
            }
            case 34: {
                int n,dec=0,p=1;
                printf("Input binary number: ");
                scanf("%d",&n);
                while(n!=0){
                    dec+= (n%10)*p;
                    n/=10;
                    p*=2;
                }
                printf("Decimal=%d\n",dec);
                break;
            }
            case 35: {
                int n,bin[32],i=0,j;
                printf("Input decimal number: ");
                scanf("%d",&n);
                while(n!=0){
                    bin[i]=n%2;
                    n/=2;
                    i++;
                }
                for(j=i-1;j>=0;j--)
                    printf("%d",bin[j]);
                printf("\n");
                break;
            }
            case 36: {
                int n,dec=0,p=1;
                printf("Input octal number: ");
                scanf("%d",&n);
                while(n!=0){
                    dec+= (n%10)*p;
                    n/=10;
                    p*=8;
                }
                printf("Decimal=%d\n",dec);
                break;
            }
            case 37: {
                int n,oct[32],i=0,j;
                printf("Input decimal number: ");
                scanf("%d",&n);
                while(n!=0){
                    oct[i]=n%8;
                    n/=10;
                    i++;
                }
                for(j=i-1;j>=0;j--)
                    printf("%d",oct[j]);
                printf("\n");
                break;
            }
            case 38: {
                int n;
                printf("Input decimal number: ");
                scanf("%d",&n);
                printf("Hex=%X\n",n);
                break;
            }
            case 39: {
                char h[20];
                int d;
                printf("Input hex number: ");
                scanf("%s",h);
                sscanf(h,"%x",&d);
                printf("Decimal=%d\n",d);
                break;
            }
            case 40: {
                float c;
                printf("Input Celsius temperature: ");
                scanf("%f",&c);
                printf("Fahrenheit=%.2f\n",(c*9/5)+32);
                break;
            }
            case 41: {
                float f;
                printf("Input Fahrenheit temperature: ");
                scanf("%f",&f);
                printf("Celsius=%.2f\n",(f-32)*5/9);
                break;
            }
            case 42: {
                float p,r,t;
                printf("Input Principal: ");
                scanf("%f",&p);
                printf("Input Rate (%%): ");
                scanf("%f",&r);
                printf("Input Time (years): ");
                scanf("%f",&t);
                printf("Simple Interest=%.2f\n",(p*r*t)/100);
                break;
            }
            case 43: {
                float p,r,t;
                printf("Input Principal: ");
                scanf("%f",&p);
                printf("Input Rate (%%): ");
                scanf("%f",&r);
                printf("Input Time (years): ");
                scanf("%f",&t);
                printf("Compound Interest=%.2f\n",p*pow(1+r/100,t)-p);
                break;
            }
            case 44: {
                float km;
                printf("Input distance in Km: ");
                scanf("%f",&km);
                printf("Meter=%.2f\n",km*1000);
                break;
            }
            case 45: {
                float m;
                printf("Input distance in Meter: ");
                scanf("%f",&m);
                printf("Km=%.2f\n",m/1000);
                break;
            }
            case 46: {
                float h;
                printf("Input hours: ");
                scanf("%f",&h);
                printf("Minutes=%.2f\n",h*60);
                break;
            }
            case 47: {
                float m;
                printf("Input minutes: ");
                scanf("%f",&m);
                printf("Hours=%.2f\n",m/60);
                break;
            }
            case 48: {
                float marks,total;
                printf("Input marks obtained: ");
                scanf("%f",&marks);
                printf("Input total marks: ");
                scanf("%f",&total);
                printf("Percentage=%.2f\n",(marks/total)*100);
                break;
            }
            case 49: {
                int n,i;
                float sum=0,x;
                printf("Input number of elements: ");
                scanf("%d",&n);
                for(i=0;i<n;i++){
                    printf("Input element %d: ", i+1);
                    scanf("%f",&x);
                    sum+=x;
                }
                printf("Sum=%.2f\n",sum);
                break;
            }
            case 50: {
                int n,i;
                float sum=0,x;
                printf("Input number of elements: ");
                scanf("%d",&n);
                for(i=0;i<n;i++){
                    printf("Input element %d: ", i+1);
                    scanf("%f",&x);
                    sum+=x;
                }
                printf("Average=%.2f\n",sum/n);
                break;
            }
            case 51: {
                int n,i;
                float x,max;
                printf("Input number of elements: ");
                scanf("%d",&n);
                printf("Input element 1: ");
                scanf("%f",&max);
                for(i=1;i<n;i++){
                    printf("Input element %d: ", i+1);
                    scanf("%f",&x);
                    if(x>max) max=x;
                }
                printf("Max=%.2f\n",max);
                break;
            }
            case 52: {
                int n,i;
                float x,min;
                printf("Input number of elements: ");
                scanf("%d",&n);
                printf("Input element 1: ");
                scanf("%f",&min);
                for(i=1;i<n;i++){
                    printf("Input element %d: ", i+1);
                    scanf("%f",&x);
                    if(x<min) min=x;
                }
                printf("Min=%.2f\n",min);
                break;
            }
            case 53: {
                int n,i,even=0,odd=0;
                printf("Input number of elements: ");
                scanf("%d",&n);
                int arr[n];
                for(i=0;i<n;i++){
                    printf("Input element %d: ", i+1);
                    scanf("%d",&arr[i]);
                    if(arr[i]%2==0) even++;
                    else odd++;
                }
                printf("Even=%d Odd=%d\n",even,odd);
                break;
            }
            case 54: {
                int n,i,temp;
                printf("Input number of elements: ");
                scanf("%d",&n);
                int arr[n];
                for(i=0;i<n;i++){
                    printf("Input element %d: ", i+1);
                    scanf("%d",&arr[i]);
                }
                for(i=0;i<n/2;i++){
                    temp=arr[i];
                    arr[i]=arr[n-1-i];
                    arr[n-1-i]=temp;
                }
                printf("Reversed array : ");
                for(i=0;i<n;i++) printf("%d ",arr[i]);
                printf("\n");
                break;
            }
            case 55: {
                int a,b,i;
                printf("Input range start: ");
                scanf("%d",&a);
                printf("Input range end: ");
                scanf("%d",&b);
                for(i=a;i<=b;i++){
                    int n=i,j,temp=0;
                    if(n>1){
                        for(j=2;j<=n/2;j++){
                            if(n%j==0) temp=1;
                        }
                    }
                    if(temp==0){
                        int sum=0,m=n;
                        while(m!=0){
                            int d=m%10;
                            sum+=d*d*d;
                            m/=10;
                        }
                        if(sum==n) printf("%d ",n);
                    }
                }
                printf("\n");
                break;
            }
            case 56: {
                int a,b,i;
                printf("Input range start: ");
                scanf("%d",&a);
                printf("Input range end: ");
                scanf("%d",&b);
                for(i=a;i<=b;i++){
                    int n=i,r=0,m=n;
                    while(m!=0){
                        r=r*10+m%10;
                        m/=10;
                    }
                    if(n==r) printf("%d ",n);
                }
                printf("\n");
                break;
            }
            case 57: {
                int n,sum=0,m,d,i;
                printf("Input a number: ");
                scanf("%d",&n);
                m=n;
                while(m!=0){
                    d=m%10;
                    int f=1;
                    for(i=1;i<=d;i++)
                        f*=i;
                    sum+=f;
                    m/=10;
                }
                if(sum==n)
                    printf("Strong\n");
                else
                    printf("Not Strong\n");
                break;
            }
            case 58: {
                int n,i,sum=0;
                printf("Input a number: ");
                scanf("%d",&n);
                for(i=1;i<n;i++){
                    if(n%i==0) sum+=i;
                }
                if(sum==n)
                    printf("Perfect\n");
                else
                    printf("Not Perfect\n");
                break;
            }
            case 59: {
                int y;
                printf("Input year: ");
                scanf("%d",&y);
                if((y%4==0 && y%100!=0) || y%400==0)
                    printf("Leap Year\n");
                else
                    printf("Not Leap Year\n");
                break;
            }
            case 60: {
                int n,c=0,m;
                printf("Input a number: ");
                scanf("%d",&n);
                m=n;
                while(m!=0){
                    c++;
                    m/=10;
                }
                printf("Digit count=%d\n",c);
                break;
            }
            case 61: {
                float inr;
                printf("Input amount in Rupees: ");
                scanf("%f",&inr);
                printf("Yen=%.2f\n",inr*1.6);
                break;
            }
            case 62: {
                float inr;
                printf("Input amount in Rupees: ");
                scanf("%f",&inr);
                printf("Dollar=%.2f\n",inr*0.012);
                break;
            }
            case 63: {
                float inr;
                printf("Input amount in Rupees: ");
                scanf("%f",&inr);
                printf("Euro=%.2f\n",inr*0.011);
                break;
            }
            case 64: {
                int n,i,sum=0;
                printf("Input a number: ");
                scanf("%d",&n);
                for(i=1;i<=n;i++) sum+=i;
                printf("Sum= %d\n",sum);
                break;
            }
            case 65: {
                int n,i,sum=0,x;
                printf("Input count of numbers: ");
                scanf("%d",&n);
                for(i=0;i<n;i++){
                    printf("Input number %d: ", i+1);
                    scanf("%d",&x);
                    sum+=x;
                }
                printf("Average=%.2f\n",sum/n);
                break;
            }
            default:
                printf("Invalid choice\n");
        }

        printf("Do you want to continue (y/n)? ");
        scanf(" %c",&again);
    }

    if(again=='n' || again=='N')
       printf("Thank you\n");

    return 0;
}
