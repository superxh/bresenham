#include <iostream>
using std::cout;
using std::endl;

void bresenham(int x0,int y0,int x1,int y1){
    int direction_x = x1-x0;
    int direction_y = y1-y0;
    int delta_x = abs(direction_x);
    int delta_y = abs(direction_y);
    int max_xy = delta_x>delta_y?delta_x:delta_y;
    int decision_param_x = -max_xy/2;
    int decision_param_y = decision_param_x;

				int x = x0,y= y0;
 			cout << x << ", " << y << endl;
    for(int i = 0; i < max_xy; ++i)
    {
        // process x
        decision_param_x += delta_x;
        if(decision_param_x > 0)
        {
            direction_x > 0 ? x++ : x--;
            decision_param_x -= max_xy;
								}
								// process y
								decision_param_y += delta_y;
								if(decision_param_y > 0)
								{
																direction_y > 0 ? y++ : y--;
																decision_param_y -= max_xy;
								}
								cout << x << ", " << y << endl;
				}
}

int main(int argc, char** argv){
								if (argc < 4) {
																cout << "Usage: " << argv[0] << " x0 y0 x1 y1" << endl;
																return 1;
								}
								const int x0 = std::stod(argv[1]);
								const int y0 = std::stod(argv[2]);
								const int x1 = std::stod(argv[3]);
								const int y1 = std::stod(argv[4]);
								bresenham(x0, y0, x1, y1);
								return 0;
}
