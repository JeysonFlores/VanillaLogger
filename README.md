Tiny toy log library to suit my needs. It's just plain vanilla C++, no extra deps, no extra overheat. 
It's just a function and a Macro, aimed to be useful when dealing with low-level stuff, like for example D-Bus services.

## Usage
- Once you included the header file you need to call the macro `INIT_LOGGER` in your code. Once you've done that, you just call the function `LOG` whenever you want to log something:
```C++
#include "vanilla-logger/vanilla-logger.h"

INIT_LOGGER;

void main()
{
    LOG(ALERT, "Alert message");
    LOG(ERROR, "Error message");
    LOG(INFO, "Info message");
    LOG(SUCCESS, "Success message");
    LOG(WARNING, "Warning message");
}
```
and you'll get something like:

![image](https://user-images.githubusercontent.com/68255757/146881731-6ac1a81b-fe69-46f3-823f-b62817a8a8f5.png)

## Installation
- You can just copy-paste the `vanilla-logger.h` file to your project and take control over its place on your project, even rename it or whatever you want.
- If you want to install it as any other header-only library you need to have ![Meson](https://mesonbuild.com/)
 installed. Once you have it just run:
```cmd
meson build
cd build
ninja install
```
