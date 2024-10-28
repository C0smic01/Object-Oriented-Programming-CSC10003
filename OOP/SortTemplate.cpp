#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Fraction
{
    public:
    int numerator;
    int denominator;

    // Overload operator < to compare two fractions
    bool operator < (Fraction f)
    {
        if (numerator * f.denominator < denominator * f.numerator)
        {
            return true;
        }
        else return false;
    }
};

// Check if the input is an integer
bool isInt(string input)
{
    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] < '0' || input[i] > '9')
        {
            return false;
        }
    }
    return true;
}

// Check if the input is a double
bool isDouble(string input)
{
    int count = 0;
    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] == '.' && (i != 0 && i != input.size() - 1))
        {
            count++;
        }
        else if (input[i] < '0' || input[i] > '9')
        {
            return false;
        }
    }
    if (count == 1)
    {
        return true;
    }
    else return false;
}

// Check if the input is a fraction
bool isFraction(string input)
{
    int count = 0;
    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] == '/' && (i != 0 && i != input.size() - 1))
        {
            count++;
        }
        else if (input[i] < '0' || input[i] > '9')
        {
            return false;
        }
    }
    if (count == 1)
    {
        return true;
    }
    else return false;
}

vector<string> Input()
{
    vector<string> array{};
    int size = 0;
    string input = "";

    cout << "Array's size: ";
    cin >> size;

    cin.ignore();
    for (int i = 0; i < size; i++)
    {
        cout << "Element " << i + 1 << ": ";
        getline(cin, input);
        array.push_back(input);
    }
    return array;
}

// Sort an array of unknown type
template <typename type>
void Sort(vector<type> &array)
{
    for (int i = 0; i < array.size() - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < array.size(); j++)
        {
            if (array[j] < array[min])
            { 
                min = j;
            }
        }
        swap(array[i], array[min]);
    }
}

// Print an array of unknown type except fraction
template <typename type>
void Output(vector<type> array)
{
    for (int i = 0; i < array.size(); i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

// Print an array of fraction
void Output(vector<Fraction> array)
{
    for (int i = 0; i < array.size(); i++)
    {
        cout << array[i].numerator << "/" << array[i].denominator << " ";
    }
    cout << endl;
}

void Execute(vector<string> array)
{
    bool flagInt = true,
        flagDouble = true,
        flagFraction = true;
    // Determine the type of the array
    for (int i = 0; i < array.size(); i++)
    {
        if (!isInt(array[i]))
        {
            flagInt = false;
        }
        if (!isDouble(array[i]))
        {
            flagDouble = false;
        }
        if (!isFraction(array[i]))
        {
            flagFraction = false;
        }
    }
    // Convert the array to the correct type, then sort and print it
    if (flagDouble)
    {
        vector<double> doubleArray(array.size());
        for (int i = 0; i < array.size(); i++)
        {
            doubleArray[i] = stod(array[i]);
        }
        Sort(doubleArray);
        Output(doubleArray);
    }
    else if (flagFraction)
    {
        vector<Fraction> fractionArray(array.size());
        for (int i = 0; i < array.size(); i++)
        {
            int pos = array[i].find('/');
            fractionArray[i].numerator = stoi(array[i].substr(0, pos));
            fractionArray[i].denominator = stoi(array[i].substr(pos + 1, array[i].length() - pos - 1));
        }
        Sort(fractionArray);
        Output(fractionArray);
    }
    else if (flagInt)
    {
        vector<int> intArray(array.size());
        for (int i = 0; i < array.size(); i++)
        {
            intArray[i] = stoi(array[i]);
        }
        Sort(intArray);
        Output(intArray);
    }
    else
    {
        Sort(array);
        Output(array);
    }
}

int main()
{
    vector<string> array = Input();
    Execute(array);
    return 0;
}