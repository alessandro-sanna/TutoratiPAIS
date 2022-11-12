#ifndef ES2
#define ES2

typedef struct punto *p_punto;

p_punto new_point(float x, float y);
float get_perimeter(p_punto x, p_punto y, p_punto z);

extern const float pi;

#endif // ES2