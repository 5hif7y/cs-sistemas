
# Kupala's original code
Written in his videos


-----
### hello world

<div><ol class="asm"><li class="li1"><div class="de1"><span class="kw5">section</span> <span class="kw5">.data</span></div></li>
<li class="li1"><div class="de1">&nbsp; &nbsp; text <span class="kw5">db</span> <span class="st0">"Hello, World!"</span><span class="sy1">,</span><span class="nu0">10</span></div></li>
<li class="li1"><div class="de1">&nbsp;</div></li>
<li class="li1"><div class="de1"><span class="kw5">section</span> <span class="kw5">.text</span></div></li>
<li class="li1"><div class="de1">&nbsp; &nbsp; <span class="kw5">global</span> _start</div></li>
<li class="li1"><div class="de1">&nbsp;</div></li>
<li class="li1"><div class="de1">_start<span class="sy1">:</span></div></li>
<li class="li1"><div class="de1">&nbsp; &nbsp; <span class="kw1">mov</span> <span class="kw4">rax</span><span class="sy1">,</span> <span class="nu0">1</span></div></li>
<li class="li1"><div class="de1">&nbsp; &nbsp; <span class="kw1">mov</span> <span class="kw4">rdi</span><span class="sy1">,</span> <span class="nu0">1</span></div></li>
<li class="li1"><div class="de1">&nbsp; &nbsp; <span class="kw1">mov</span> <span class="kw4">rsi</span><span class="sy1">,</span> text</div></li>
<li class="li1"><div class="de1">&nbsp; &nbsp; <span class="kw1">mov</span> <span class="kw4">rdx</span><span class="sy1">,</span> <span class="nu0">14</span></div></li>
<li class="li1"><div class="de1">&nbsp; &nbsp; <span class="kw1">syscall</span></div></li>
<li class="li1"><div class="de1">&nbsp;</div></li>
<li class="li1"><div class="de1">&nbsp; &nbsp; <span class="kw1">mov</span> <span class="kw4">rax</span><span class="sy1">,</span> <span class="nu0">60</span></div></li>
<li class="li1"><div class="de1">&nbsp; &nbsp; <span class="kw1">mov</span> <span class="kw4">rdi</span><span class="sy1">,</span> <span class="nu0">0</span></div></li>
<li class="li1"><div class="de1">&nbsp; &nbsp; <span class="kw1">syscall</span></div></li>
</ol></div>

-----
### Getting user input

<div><ol class="asm"><li class="li1"><div class="de1"><span class="kw5">section</span> <span class="kw5">.data</span></div></li>
<li class="li1"><div class="de1">&nbsp; &nbsp; text1 <span class="kw5">db</span> <span class="st0">"What is your name? "</span></div></li>
<li class="li1"><div class="de1">&nbsp; &nbsp; text2 <span class="kw5">db</span> <span class="st0">"Hello, "</span></div></li>
<li class="li1"><div class="de1">&nbsp;</div></li>
<li class="li1"><div class="de1"><span class="kw5">section</span> <span class="kw5">.bss</span></div></li>
<li class="li1"><div class="de1">&nbsp; &nbsp; name <span class="kw5">resb</span> <span class="nu0">16</span></div></li>
<li class="li1"><div class="de1">&nbsp;</div></li>
<li class="li1"><div class="de1"><span class="kw5">section</span> <span class="kw5">.text</span></div></li>
<li class="li1"><div class="de1">&nbsp; &nbsp; <span class="kw5">global</span> _start</div></li>
<li class="li1"><div class="de1">_start<span class="sy1">:</span></div></li>
<li class="li1"><div class="de1">&nbsp;</div></li>
<li class="li1"><div class="de1">&nbsp; &nbsp; <span class="kw1">call</span> _printText1</div></li>
<li class="li1"><div class="de1">&nbsp; &nbsp; <span class="kw1">call</span> _getName</div></li>
<li class="li1"><div class="de1">&nbsp; &nbsp; <span class="kw1">call</span> _printText2</div></li>
<li class="li1"><div class="de1">&nbsp; &nbsp; <span class="kw1">call</span> _printName</div></li>
<li class="li1"><div class="de1">&nbsp;</div></li>
<li class="li1"><div class="de1">&nbsp; &nbsp; <span class="kw1">mov</span> <span class="kw4">rax</span><span class="sy1">,</span> <span class="nu0">60</span></div></li>
<li class="li1"><div class="de1">&nbsp; &nbsp; <span class="kw1">mov</span> <span class="kw4">rdi</span><span class="sy1">,</span> <span class="nu0">0</span></div></li>
<li class="li1"><div class="de1">&nbsp; &nbsp; <span class="kw1">syscall</span></div></li>
<li class="li1"><div class="de1">&nbsp;</div></li>
<li class="li1"><div class="de1">_getName<span class="sy1">:</span></div></li>
<li class="li1"><div class="de1">&nbsp; &nbsp; <span class="kw1">mov</span> <span class="kw4">rax</span><span class="sy1">,</span> <span class="nu0">0</span></div></li>
<li class="li1"><div class="de1">&nbsp; &nbsp; <span class="kw1">mov</span> <span class="kw4">rdi</span><span class="sy1">,</span> <span class="nu0">0</span></div></li>
<li class="li1"><div class="de1">&nbsp; &nbsp; <span class="kw1">mov</span> <span class="kw4">rsi</span><span class="sy1">,</span> name</div></li>
<li class="li1"><div class="de1">&nbsp; &nbsp; <span class="kw1">mov</span> <span class="kw4">rdx</span><span class="sy1">,</span> <span class="nu0">16</span></div></li>
<li class="li1"><div class="de1">&nbsp; &nbsp; <span class="kw1">syscall</span></div></li>
<li class="li1"><div class="de1">&nbsp; &nbsp; <span class="kw1">ret</span></div></li>
<li class="li1"><div class="de1">&nbsp;</div></li>
<li class="li1"><div class="de1">_printText1<span class="sy1">:</span></div></li>
<li class="li1"><div class="de1">&nbsp; &nbsp; <span class="kw1">mov</span> <span class="kw4">rax</span><span class="sy1">,</span> <span class="nu0">1</span></div></li>
<li class="li1"><div class="de1">&nbsp; &nbsp; <span class="kw1">mov</span> <span class="kw4">rdi</span><span class="sy1">,</span> <span class="nu0">1</span></div></li>
<li class="li1"><div class="de1">&nbsp; &nbsp; <span class="kw1">mov</span> <span class="kw4">rsi</span><span class="sy1">,</span> text1</div></li>
<li class="li1"><div class="de1">&nbsp; &nbsp; <span class="kw1">mov</span> <span class="kw4">rdx</span><span class="sy1">,</span> <span class="nu0">19</span></div></li>
<li class="li1"><div class="de1">&nbsp; &nbsp; <span class="kw1">syscall</span></div></li>
<li class="li1"><div class="de1">&nbsp; &nbsp; <span class="kw1">ret</span></div></li>
<li class="li1"><div class="de1">&nbsp;</div></li>
<li class="li1"><div class="de1">_printText2<span class="sy1">:</span></div></li>
<li class="li1"><div class="de1">&nbsp; &nbsp; <span class="kw1">mov</span> <span class="kw4">rax</span><span class="sy1">,</span> <span class="nu0">1</span></div></li>
<li class="li1"><div class="de1">&nbsp; &nbsp; <span class="kw1">mov</span> <span class="kw4">rdi</span><span class="sy1">,</span> <span class="nu0">1</span></div></li>
<li class="li1"><div class="de1">&nbsp; &nbsp; <span class="kw1">mov</span> <span class="kw4">rsi</span><span class="sy1">,</span> text2</div></li>
<li class="li1"><div class="de1">&nbsp; &nbsp; <span class="kw1">mov</span> <span class="kw4">rdx</span><span class="sy1">,</span> <span class="nu0">7</span></div></li>
<li class="li1"><div class="de1">&nbsp; &nbsp; <span class="kw1">syscall</span></div></li>
<li class="li1"><div class="de1">&nbsp; &nbsp; <span class="kw1">ret</span></div></li>
<li class="li1"><div class="de1">&nbsp;</div></li>
<li class="li1"><div class="de1">_printName<span class="sy1">:</span></div></li>
<li class="li1"><div class="de1">&nbsp; &nbsp; <span class="kw1">mov</span> <span class="kw4">rax</span><span class="sy1">,</span> <span class="nu0">1</span></div></li>
<li class="li1"><div class="de1">&nbsp; &nbsp; <span class="kw1">mov</span> <span class="kw4">rdi</span><span class="sy1">,</span> <span class="nu0">1</span></div></li>
<li class="li1"><div class="de1">&nbsp; &nbsp; <span class="kw1">mov</span> <span class="kw4">rsi</span><span class="sy1">,</span> name</div></li>
<li class="li1"><div class="de1">&nbsp; &nbsp; <span class="kw1">mov</span> <span class="kw4">rdx</span><span class="sy1">,</span> <span class="nu0">16</span></div></li>
<li class="li1"><div class="de1">&nbsp; &nbsp; <span class="kw1">syscall</span></div></li>
<li class="li1"><div class="de1">&nbsp; &nbsp; <span class="kw1">ret</span></div></li>
</ol></div>

-----
