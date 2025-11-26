#import <Entity.h>

int main(int argc, const char * argv[]) {
    Entity *entity = [[Entity alloc] init];
    [entity setup];
    assert ([entity isShip]);
    return 0;
}
