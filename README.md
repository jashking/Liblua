# Liblua

UE4 Lua 源码模块，直接复制到项目中 *Source* 下即可

## 测试平台 ##

* 已测试通过
	* `Win32`, `Win64`
	* `Android`
	* `Mac`, `iOS`

* 未测试
	* `Linux`

## iOS 编译问题 ##

编译 iOS 时候会出现如下错误:

clang: error: argument unused during compilation: '-fno-objc-exceptions'

这是因为在编译 .c 文件时候这个 -fno-objc-exceptions clang 参数并没有被用到

解决方法:

在 *Engine\Source\Programs\UnrealBuildTool\Platform\IOS\IOSToolChain.cs* 文件的 `GetCompileArguments_Global` 方法中，增加一行

```csharp
Result += " -Wno-unused-command-line-argument";
```