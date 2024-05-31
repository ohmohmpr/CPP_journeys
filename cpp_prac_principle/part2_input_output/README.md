https://ubuntuforums.org/showthread.php?t=1766614

```bash
g++ -w -Wall -std=c++11 Graph.cpp Window.cpp GUI.cpp Simple_window.cpp src/12_3.cpp `fltk-config --ldflags --use-images` -o main
```

should use CMakeLists.txt
