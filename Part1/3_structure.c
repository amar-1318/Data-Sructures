#include <stdio.h>
// struct rectangle
// {
//    int length;
//    int breadth;
// };

struct student
{
    int rollno;
    int regno;
    char name[55];
};

int main()
{
    // Structure is collection of dissimilar data under one name

    //    struct rectangle r={10,15};
    //    {
    //     printf("Length is %d ", r.length);
    //     r.length = 20;
    //     r.breadth = 25;
    //     printf("Length and breadths are %d & %d\n " , r.length , r.breadth);
    //     printf("Area of rectangle is %d " , r.length * r.breadth);

    //    };

    struct student s[4] = {{1, 2, "Amar"}, {2, 3, "Nikhil"}};

    printf("%s", s[1].name);

    return 0;
}