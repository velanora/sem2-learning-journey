// Assignment 3
#include <iostream>
using namespace std;

class Vector
{
protected:
    int *arr;
    int capacity_size;
    int count;

public:
    Vector(int capacity_size)
    {
        count = 0;
        this->capacity_size = capacity_size;

        arr = new int[capacity_size];
    }

    void resize()
    {
        if (capacity_size == 0)
        {
            capacity_size++;
        }
        else
        {
            capacity_size *= 2;
        }
        int *temp = new int[capacity_size];
        for (int i = 0; i < count; i++)
        {
            temp[i] = arr[i];
        }

        delete[] arr;
        arr = temp;
        temp = NULL;
    }

    void push_back(int pushint)
    {
        if (count == capacity_size)
        {
            resize();
        }
        arr[count] = pushint;
        count++;
    }

    int get(int i)
    {
        return arr[i];
    }

    void display()
    {
        cout << "{";
        for (int i = 0; i < count; i++)
        {
            cout << arr[i];
            if (i != count - 1)
            {
                cout << ", ";
            }
        }
        cout << "}" << endl;
    }

    int find_len()
    {
        return count;
    }

    ~Vector()
    {
        delete[] arr;
        arr = NULL;
    }
};

class UniqueVector : public Vector
{
public:
    UniqueVector(int cs) : Vector(cs) {}

    void push_back(int pushint)
    {
        bool exist = false;
        int i = 0;

        while (i < count)
        {
            if (arr[i] == pushint)
            {
                exist = true;
                break;
            }
            i++;
        }

        if (exist == false)
        {
            if (count == capacity_size)
            {

                resize();
            }
            arr[count] = pushint;
            count++;
        }
    }
};

class FrequencyVector : public Vector
{
protected:
    int *special_arr;

public:
    FrequencyVector(int cs) : Vector(cs)
    {
        special_arr = new int[capacity_size];
    }

    void push_back(int pushint)
    {

        for (int i = 0; i < count; i++)
        {
            if (arr[i] == pushint)
            {
                special_arr[i]++;
                return;
            }
        }

        if (count == capacity_size)
        {
            resize_frequencies();
        }

        arr[count] = pushint;
        special_arr[count] = 1;
        count++;
    }

    void resize_frequencies()
    {
        resize();

        int *temp_special = new int[capacity_size];

        for (int i = 0; i < count; i++)
        {
            temp_special[i] = special_arr[i];
        }

        delete[] special_arr;
        special_arr = temp_special;
        temp_special = NULL;
    }

    int get_freq(int x)
    {
        for (int i = 0; i < count; i++)
        {
            if (arr[i] == x)
                return special_arr[i];
        }
        return 0;
    }

    void frequencies(int x, int y, int z)
    {
        if (!count)
        {
            cout << "0 0 0" << endl;
            return;
        }

        cout<<"frequency of "<<x<<" ----> "<<get_freq(x)<<endl;
        cout<<"frequency of "<<y<<" ----> "<<get_freq(y)<<endl;
        cout<<"frequency of "<<z<<" ----> "<<get_freq(z)<<endl;
    }

    ~FrequencyVector()
    {
        delete[] special_arr;
        special_arr = NULL;
    }
};

int main()
{
    cout << "--------------------- Main vector -----------------------\n";
    int x;
    cout << "Enter the number of elements to be stored :";
    cin >> x;
    Vector V1(x);

    for (int i = 0; i < x; i++)
    {
        int input;
        if (i == 0)
        {
            cout << "Enter the Elements Vector : ";
        }
        cin >> input;
        V1.push_back(input);
    }

    V1.display();
    cout << endl;

    cout << "--------------------- Elements of Unique vector ---------------------\n"
         << endl;

    int s;
    cout << "Enter the number of elements to be stored : ";
    cin >> s;
    UniqueVector U1(s);
    for (int i = 0; i < s; i++)
    {
        int input;
        if (i == 0)
        {
            cout << "Enter the Elements Unique Vector : ";
        }
        cin >> input;
        U1.push_back(input);
    }

    U1.display();
    cout << endl;

    cout << "------------------------ Elements of Frequency vector --------------- ----\n"
         << endl;

    int f;
    cout << "Enter the number of elements to be stored : ";
    cin >> f;
    FrequencyVector F1(f);
    for (int i = 0; i < f; i++)
    {
        int input;
        if (i == 0)
        {
            cout << "Enter the Elements Frequency Vector : ";
        }
        cin >> input;
        F1.push_back(input);
    }

    F1.display();
    cout << endl;
    cout << "-----------------------------Frequencies-----------------------------------\n"
         << endl;
    int input1, input2, input3;
    cout << "Enter the Elements Frequency Vector : ";
    cin >> input1 >> input2 >> input3;
    F1.frequencies(input1, input2, input3);

    return 0;
}