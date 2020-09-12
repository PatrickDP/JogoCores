#include <iostream>

using namespace std;

class PrimaryColors
{
private:
    string colorAtribute;
public:
    void setColorAtribute(string colorParameter)
    {
        colorAtribute = colorParameter;
    }
    string getColorAtribute()
    {
        //cout << "My choosen color is: " << colorAtribute;
        return colorAtribute;
    }
    void toMixColors()
    {
        string yourDesiredColor, resultMixColor;
        cout << "Insert your desired color to mix: ";
        cin >> yourDesiredColor;
        if(colorAtribute == "BLUE")
        {
            if(yourDesiredColor == "BLUE")
            {
                resultMixColor = "BLUE";
            }
            if(yourDesiredColor == "YELLOW")
            {
                resultMixColor = "GREEN";
            }
            if(yourDesiredColor == "RED")
            {
                resultMixColor = "VIOLET";
            }
        }
        else if(colorAtribute == "YELLOW")
        {
            if(yourDesiredColor == "YELLOW")
            {
                resultMixColor = "YELLOW";
            }
            if(yourDesiredColor == "BLUE")
            {
                resultMixColor = "GREEN";
            }
            if(yourDesiredColor == "RED")
            {
                resultMixColor = "ORANGE";
            }
        }
        else if(colorAtribute == "RED")
        {
            if(yourDesiredColor == "RED")
            {
                resultMixColor = "RED";
            }
            if(yourDesiredColor == "YELLOW")
            {
                resultMixColor = "ORANGE";
            }
            if(yourDesiredColor == "BLUE")
            {
                resultMixColor = "VIOLET";
            }
        }
        cout << "\nThe mix of colors (" << colorAtribute << " & " << yourDesiredColor << ")" << " results in: " << resultMixColor;
    }
};

int main()
{
    string color, option;
    PrimaryColors pc;
    do
    {
        cout << "Insert your desired color: ";
        cin >> color;
        pc.setColorAtribute(color);
        pc.getColorAtribute();
        pc.toMixColors();
        cout <<"\n\nDo you want continue this program? (YES/NO) : ";
        cin >> option;
        if(option == "NO")
        {
            cout << "\t\t\t### This program has sucessofull encerred! ###" << endl;
        }
    } while(option != "NO");
    return 0;
}
