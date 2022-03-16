---

title: glosario-de-terminos 

date: mié 16 mar 2022 17:51:48 UTC-3

---



### Ventanas



### Pixmaps



### Cursores



### Fuentes



### Display de mapa de bits (Pantalla de mapas de bits o virtual)

El sistema XWindow es un sistema para visualizacion de mapas de bits. Un visualizador o display de mapa de bits es un conjunto de elementos de visualizacion de puntos denominados pixeles. Todos los objetos graficos en el display(pantalla en ingles) constan de pixeles. Cada pixel tiene asociado un valor de representa un color en el display.



### Tamaño de pantalla y coordenadas



### Memoria de vídeo y planos de bits



### Mapa de colores



### Modelo cliente-servidor



### Estructura del software XWindow



### Protocolo X



### Request y Buffering



### Request y Reply





### Window Manager (administrador de ventanas)

La pantalla del display de mapa de bits es un lugar público que muchos clientes usan al mismo tiempo. Cada cliente debería ser un buen ciudadano en la pantalla del sistema XWindow. Dado que un usuario puede usar mas de un cliente en la misma pantalla, es necesario una interfaz de usuario consistente entre cada cliente. Todos esos problemass los resuelve el window manager (gestor de ventanas). El gesto de ventanas es un cliente especial que construye la inferfaz de usuario y ajusta la disposicion de ventanass de cada cliente. Si clientes ordinarios envian peticiones respecto a la disposicion tales como cambiar el tamaño o mover ventanas, el servidor X redirecciona dichas peticiones hacia el gestor de ventanas. Si la petición no infringe las reglas del gestor de ventanas, el servidor llevara a cabo la petición. Distintos gestores de ventanas pueden tener distintas politicas. El usuario puede puentear al gestor de ventanas y controlar el mismo la pantalla. El gestor de ventanas ajusta las peticiones de la situacion, proporciona una interfaz de usuario, y reenvia lass peticiones al servidor. Como resultado, las peticiones de cada cliente se ajustan en su localizacion y se fuerza a tener una interfaz de usuario consistente.



### Recursos e identificadores de recursos



### Graphic Context (Contexto grafico)



### 

