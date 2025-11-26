# objc_abi2.2_bitfield_issue
Demonstrates assertion failure

```HelloWorld: main.m:6: int main(int, const char **): Assertion `[entity isShip]' failed.```


Check isShip when debugging main.m in lldb:
```expr -- ((Entity *)entity)->isShip```