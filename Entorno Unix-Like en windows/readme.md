## Instalación de entorno UNiX-Like en Windows

Solo recomendable para personas que prefieren una terminal.

No recomendable para el caso contrario.



1. Descargar el instalador en: https://www.msys2.org/

![image-20210413213532633](readme.assets/image-20210413213532633.png)

2. Abrir el instalador. MSYS2 requiere "Windows 7 64 bit" o mas nuevo.

3. Dejar por default o elegir una **Carpeta de instalación** 

   ![Second screen of MSYS2 installation](readme.assets/install-2-path.png)

4. Cuando termine, seleccionar **Run MSYS2 now**.

   ![Third screen of MSYS2 installation](readme.assets/install-3-finish.png)

5. Actualizar los paquetes y la base de datos, ejecutar
    `pacman -Syu`:

   ```
   $ pacman -Syu
   :: Synchronizing package databases...
    mingw32                        805.0 KiB
    mingw32.sig                    438.0   B
    mingw64                        807.9 KiB
    mingw64.sig                    438.0   B
    msys                           289.3 KiB
    msys.sig                       438.0   B
   :: Starting core system upgrade...
   warning: terminate other MSYS2 programs before proceeding
   resolving dependencies...
   looking for conflicting packages...
   
   Packages (6) bash-5.1.004-1  filesystem-2021.01-1
                mintty-1~3.4.4-1  msys2-runtime-3.1.7-4
                pacman-5.2.2-9  pacman-mirrors-20201208-1
   
   Total Download Size:   11.05 MiB
   Total Installed Size:  53.92 MiB
   Net Upgrade Size:      -1.24 MiB
   
   :: Proceed with installation? [Y/n]
   :: Retrieving packages...
    bash-5.1.004-1-x86_64            2.3 MiB
    filesystem-2021.01-1-any        33.2 KiB
    mintty-1~3.4.4-1-x86_64        767.2 KiB
    msys2-runtime-3.1.7-4-x86_64     2.6 MiB
    pacman-mirrors-20201208-1-any    3.8 KiB
    pacman-5.2.2-9-x86_64            5.4 MiB
   (6/6) checking keys in keyring       100%
   (6/6) checking package integrity     100%
   (6/6) loading package files          100%
   (6/6) checking for file conflicts    100%
   (6/6) checking available disk space  100%
   :: Processing package changes...
   (1/6) upgrading bash                 100%
   (2/6) upgrading filesystem           100%
   (3/6) upgrading mintty               100%
   (4/6) upgrading msys2-runtime        100%
   (5/6) upgrading pacman-mirrors       100%
   (6/6) upgrading pacman               100%
   :: To complete this update all MSYS2 processes including this terminal will be closed. Confirm to proceed [Y/n]
   ```

6. Arrancar "MSYS2 MSYS" desde el menu de inicio. Actualizar el resto de los paquetes con 
   `pacman -Su`:

   ```
   $ pacman -Su
   :: Starting core system upgrade...
    there is nothing to do
   :: Starting full system upgrade...
   resolving dependencies...
   looking for conflicting packages...
   
   Packages (20) base-2020.12-1  bsdtar-3.5.0-1
                 [... more packages listed ...]
   
   Total Download Size:   12.82 MiB
   Total Installed Size:  44.25 MiB
   Net Upgrade Size:       3.01 MiB
   
   :: Proceed with installation? [Y/n]
   [... downloading and installation continues ...]
   ```

7. Ahora MSYS2 esta listo, solo falta instalar algunas herramientas y gcc de mingw-w64 para empezar a compilar:

   ```
   $ pacman -S --needed base-devel mingw-w64-x86_64-toolchain
   warning: file-5.39-2 is up to date -- skipping
   [... more warnings ...]
   :: There are 48 members in group base-devel:
   :: Repository msys
      1) asciidoc  2) autoconf  3) autoconf2.13  4) autogen
      [... more packages listed ...]
   
   Enter a selection (default=all):
   :: There are 19 members in group mingw-w64-x86_64-toolchain:
   :: Repository mingw64
      1) mingw-w64-x86_64-binutils  2) mingw-w64-x86_64-crt-git
      [... more packages listed ...]
   
   Enter a selection (default=all):
   resolving dependencies...
   looking for conflicting packages...
   
   Packages (123) docbook-xml-4.5-2  docbook-xsl-1.79.2-1
                  [... more packages listed ...]
                  m4-1.4.18-2  make-4.3-1  man-db-2.9.3-1
                  mingw-w64-x86_64-binutils-2.35.1-3
                  mingw-w64-x86_64-crt-git-9.0.0.6090.ad98746a-1
                  mingw-w64-x86_64-gcc-10.2.0-6
                  mingw-w64-x86_64-gcc-ada-10.2.0-6
                  mingw-w64-x86_64-gcc-fortran-10.2.0-6
                  mingw-w64-x86_64-gcc-libgfortran-10.2.0-6
                  mingw-w64-x86_64-gcc-libs-10.2.0-6
                  mingw-w64-x86_64-gcc-objc-10.2.0-6
                  mingw-w64-x86_64-gdb-10.1-2
                  mingw-w64-x86_64-gdb-multiarch-10.1-2
                 [... more packages listed ...]
   
   Total Download Size:    196.15 MiB
   Total Installed Size:  1254.96 MiB
   
   :: Proceed with installation? [Y/n]
   [... downloading and installation continues ...]
   ```

8. Para empezar a usar GCC de mingw-w64, cierre esta terminal y ejecute "MSYS MinGW 64-bit" desde el menú de inicio. Ahora podes ejecutar `make` o `gcc` para compilar software en Windows.
   
9. **Descargar e instalar Alacritty** en https://github.com/alacritty/alacritty/releases el archivo Alacritty-vX.X.X-installer.msi (X es la versión) más nuevo, es decir el primero ya que esta listado en orden decreciente.

10. **Configurar Alacritty**: el archivo que Alacritty busca como su archivo de configuración se debe encontrar en **%APPDATA%\alacritty\alacritty.yml** pero la instalación no crea esta carpeta y archivo, debemos crearlos nosotros mismos por lo tanto debemos ir a la carpeta **%APPDATA%** , **crear** una carpeta llamada **alacritty** y dentro de la carpeta un archivo que se llame **alacritty.yml** con el siguiente contenido (copiar y pegar):
```
enable_experimental_conpty_backend: true
# add some transparency
background_opacity: 0.75

shell:
  program: C:\msys64\usr\bin\bash.exe
  args:
  - --login
```

11. **Configurar la shell**: la shell que vamos a usar es **bash** y para poder configurarla **ejecutamos Alacritty** que sera nuestra terminal a partir de ahora, y abrimos el archivo **.bashrc** (si, el nombre comienza con un punto y tiene una razón) con un editor de texto como **nano** o **vim** y agregamos a lo ultimo una linea:
    ```export PATH="C:\msys64\mingw64\bin\:$PATH"```

![image-20210413232358834](readme.assets/image-20210413232358834.png)

​    

Lea la [pagina de intruduccion](https://www.msys2.org/wiki/MSYS2-introduction/) para aprender cual ítem del **Menú de Inicio** usar y cuales paquetes instalar. Vea la [guia detallada de instalacion de MSYS2](https://www.msys2.org/wiki/MSYS2-installation/) para solucionar problemas y detalles adicionales sobre como mantener actualizado MSYS2.



### Como usar los comandos para compilar codigo C:

Se edita archivos con:

**vim** nombre-del-archivo**.c**
o 
**nano** nombre-del-archivo**.c** 

Se compila archivos con:
**gcc** nombre-del-archivo**.c** -o nombre-del-ejecutable**.exe**

Existe una forma ya automatizada para compilar, esto busca automáticamente el archivo con el nombre terminado en .c y devuelve un archivo .exe

**make** *nombre-del-archivo*

Se ejecutan con:
**./**nombre-del-ejecutable**.exe**
