# objc_abi2.2_bitfield_issue
If you run the code as is, it will fail with an assertion. 
```HelloWorld: main.m:6: int main(int, const char **): Assertion `[entity isShip]' failed.```

If you edit Entity.h and change line 35 to remove the `: 1` then there is no assertion failure.

`isShip` is set to YES, but when the `: 1` is present, somehow `scanClass = CLASS_PLAYER;` changes `isShip`.

You can see it change when debugging main.m in lldb:
```expr -- ((Entity *)entity)->isShip```
