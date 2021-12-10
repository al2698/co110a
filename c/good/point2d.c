#include <stdio.h>

struct point {
  double x, y;
};

typedef struct point point_t;

void point_point(struct point p){
    printf("x=%f y=%f\n", p.x, p.y);
}

int main() {
  point_t p1 = { .x=0.1, .y=0.2};
  point_point(p1);
  point_point((struct p){ x=0.1, y=0.2});
}