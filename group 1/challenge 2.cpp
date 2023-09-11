/*
PROMPT: Tuffy just got a train cart of random boxes that are sorted based on an id. Help Tuffy find the box he needs to check!
*/

#include <vector>
#include <iostream>

int main()
{
    std::vector<double> mysteryCart = {1, 2, 3, 4, 5, 8, 9, 12, 23, 54, 56, 57, 58, 67, 78, 79, 80, 81, 82, 86, 87, 90};

    // ⭐TODO: Ask Tuffy by requesting their input which number they are looking for and store it into a variable
    int element;
    bool ispresent = false;
    std::cout << "What element are you looking for?" << '/n';
    std::cin >> element;
    // ⭐TODO: loop through each element of `mysteryCart` and check if that number exists. If it doesn't then print out "Im crying 😭" but if it is there then print "YIPPIE!!!!"
    for (int number : mysteryCart)
    {
        if (number == element)
        {
            ispresent = true;
        }
    }
    if (ispresent)
    {
        std::cout << "YIPPIE!!!!";
    }
    else
    {
        std::cout << "Im crying 😭";
    }
    // 💡 Pause: In the line below talk between your team and ask what is the efficiency class of the loop you previously implemented
    // ✅ Answer:

    // ⭐TODO: Write code to loop through `mysteryCart` but this time make it significantly faster
    // Hint: think about how we went about our world map finder activity earlier.
    int front = 0;
    int back = mysteryCart.size();
    int mid = mysteryCart.size() / 2;
    bool inVector = false;
    while (back > front)
    {
        if (mid < element)
        {
            mid = mid - back;
            front = mid;
        }
        else if (mid > element)
        {
            mid = mid - front;
            back = mid;
        }
        else
        {
            std::cout << "YIPPIE!!!!";
            inVector = true;
        }
    }
    if (!inVector)
    {
        std::cout << "Im crying 😭";
    }
    // 💡 Pause: In the line below talk between your team and ask what is the efficiency class of the loop you previously implemented
    // ✅ Answer: O(log n)

    return 0;
}

// bool isPresent(int elementt, std::vector mysteryCartt)
// {
//     for(int i=0; i<mysteryCartt; i++) {
//         if (elementt == mysteryCartt[i]) {
//             std::cout << "YIPPEE";
//             return true;
//         } else {
//             std::cout << "I'm crying";
//             return false;
//         }
//     }
// }
//