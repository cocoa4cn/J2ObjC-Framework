# J2ObjC-Framework

##comment by cocoa4cn
J2ObjC-Framwork 是actor im适用的J2Ojbc版本。
这个库只包含一些简单的脚本，其步骤是
１．　从官方(google/j2objc)下载一个（固定，非最新）版本的J2ObjC。
２．　使用Python脚本对官方J2ObjC做批量修改，使他在Actor的环境中能编译通过。

初步的观察发现主要是修正一些头文件的包含方式，　如　include <dd>改成　include "dd.h"
类似情况或许在J2objC的新版本中已经修正。

此处看情况需要是不是更新到J2objC的最新版。

##original
Frameworked version of j2objc library from Google. This is frameworked + cocoapod version that allows you easily include j2objc to your project.

Unfortunatelly, this library doesn't compatable with original one in terms that there are different include paths in generated sources.

All inlcude/import with quotes was replaced with andgled/frameworked version.
