How to build the aria2 source code?
==================================

System requirements
------------------------------------

    - C++ compiler 

     Microsoft Visual Studio 2013 or above .

Build!
------------------------------------
wintls support:

nmake clean
nmake

or openssl support:

nmake CC=clang-cl clean
nmake CC=clang-cl OPENSSL_ROOT=d:/xxx/libopenssl_md

------------------------------------
features:

* Modify the server's maximum connections limit. The default is 16, but you can specify an unlimited number if desired
* Modify the default number of single task threads from 128 to a customizable and unlimited number
* Modify the maximum number of simultaneous download tasks. The default is 16, but you can specify an unlimited number
* Modify the minimum file fragment size, which is set to 1M by default, with a value range of 2K - 1024M
* Modify the link timeout to 30s, with a value range of 1 - 600s
* Modify the automatic retry mechanism for HTTP 40X errors, and enable resume-from-breakpoints by default
* Patches #25, #2209, #2272, #2239, etc. have been applied
* Portable, aria2.conf, dht, input, session, and other files can be placed in the current process directory
* By default, the aria2.conf file in the process directory will be automatically loaded. If you do not need to load it, please use the --no-conf option
* File paths support the use of environment variables
* Support -D argment background startup
* Supports TLS 1.3, automatically loading the cacert.pem certificate file within the process directory
* In RPC mode, file deletion is supported. By sending "aria2.purgeLocalFile" with the gid, tasks and files can be deleted
* Load-cookies is supported in RPC mode. If the cookie file has a .tmp extension, it will be automatically deleted after use
* Built-in Aria2Ng, default http://127.0.0.1:9990, port numbers 9990 - 9999
* Added --enable-ngweb argment, which is effective when RPC is enabled. Aria2Ng has added a menu to delete task files

------------------------------------

about aria2-msvc:

Fork from https://github.com/aria2/aria2/