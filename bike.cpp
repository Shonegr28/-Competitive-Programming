#include <iostream>
#include <sstream>
#include <vector>

int main()
{
    double intercept;
    int baricades;
    std::cout << "How many barricades are there?" << std::endl;
    std::cin >> baricades;
    std::cin.ignore(); 
    double shortestIntercept = std::numeric_limits<double>::max();
    for (int i = 0; i < baricades; i++)
    {
        std::string input;
        std::getline(std::cin, input);

        std::istringstream iss(input);
        std::vector<int> numbers; // stores

        int number;
        while (iss >> number)
        {
            numbers.push_back(number);
        }

        if (numbers.size() < 4) {
            std::cout << "Invalid input. Please enter four numbers." << std::endl;
            continue;
        }

        double x1 = numbers[0];
        double y1 = numbers[1];
        double x2 = numbers[2];
        double y2 = numbers[3];

        double slope = (y2 - y1) / (x2 - x1);
        double intercept = y1 - (slope * x1);
        if (intercept < shortestIntercept) {
            shortestIntercept = intercept;
        }


    }
    if (shortestIntercept != std::numeric_limits<double>::max()) {
        std::cout << shortestIntercept << std::endl;
        if(shortestIntercept<0){
            double negative= -1.0;
            std::cout<<negative<<std::endl; 
        }
    }

    return 0;
}
