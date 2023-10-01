#include <iostream>
#include <cmath>
using namespace std;

void Get_Coeffiecients(double*, double*, double*);       //Initializing Get_Coeffiecient Function
char Calc_Discriminant(double, double, double, double*);          //Initializing Calc_Discriminant Function
void Calc_Root(double*, double*, double*, char, double*);         //Initializing Calc_Root Function

int main(){
    char name[50];
    cout << "Hello, what should I call you? ";
    cin.getline(name, 50);
    while(true){
        double a, b, c, disc_val;
        char choice, disc;
        // applying call by values and reference
        Get_Coeffiecients(&a, &b, &c);
        disc = Calc_Discriminant(a, b, c, &disc_val);
        Calc_Root(&a, &b, &c, disc, &disc_val);
        cout << "\n" << name << ",Do you want to continue(y/n): ";
        cin >> choice;
        if (choice == 'y'){
            continue;
        }
        else if (choice == 'n'){
            break;
        }
    }
    system("pause");
    return 0;

}

void Get_Coeffiecients(double *a_ptr, double *b_ptr, double *c_ptr){
    double a, b, c;
    cout << "To calculate the roots of a quadratic equation ax2 + bx + c = 0" << endl;
    cout << "Input the value for a: ";
    cin >> a;
    cout << "\nInput the value for b: ";
    cin >> b;
    cout << "\nInput the value for c: ";
    cin >> c;
    *a_ptr = a;
    *b_ptr = b;
    *c_ptr = c;
}

char Calc_Discriminant(double a, double b, double c, double *disc_val_ptr){
    /*if the quadratic equation roots are real and distinct, return 'r'
      if the quadratic equation roots are the real and same, return 's'
      if the quadratic equation roots are imaginary, return 'i'*/
    double discriminant = (pow(b, 2))-(4*a*c);
    cout << "The discriminant of the quadratic equation is : " << discriminant << endl;
    *disc_val_ptr = discriminant;
    if (discriminant > 0){
        return 'r';
    }
    else if (discriminant < 0){
        return 'i';
    }
    else{
        return 's';
    }
}

void Calc_Root(double *a_ptr, double *b_ptr, double *c_ptr, char disc, double *disc_val_ptr){
    double a = *a_ptr;
    double b = *b_ptr;
    double c = *c_ptr;
    double disc_val = *disc_val_ptr;
    if (disc == 'r'){
        double root_1 = ((-b) + sqrt(disc_val))/(2*a);
        double root_2 = ((-b) - sqrt(disc_val))/(2*a);
        cout << "The roots of the quadratic equation are " << root_1 
             << " and " << root_2 << endl;
    }
    else if (disc == 's'){
        double root_1 = ((-b) + sqrt(disc_val))/(2*a);
        double root_2 = ((-b) - sqrt(disc_val))/(2*a);
        cout << "The roots of the quadratic equation are " << root_1 << " and " << root_2 << endl;
    }
    else {
        double val_1 = (-b)/(2*a);
        double val_2  = (sqrt(-1 * disc_val))/(2*a);
        cout << "The roots of the quadratic equation are " << val_1 << " + i" << val_2 
             << " and " << val_1 << " - i" << val_2 << endl;
    }
        
}