function Proyecto()

iZ = 1
while (Z >= 1 & Z <= 12)

printf("Menú: \n(1) Ondas \n(2)Ondas con caracter \n(3) Gusanito \n(4) Fibonacci \n(5) Marcando el máximo y mínimo \n(6) Círculos \n(7) Paleta de colores inclinada \n(8) Números al azar \n(9) Curva \n(10) Función Plot2d3 \n(11)Graficar valores de un archivo \n(12) Flip \n(13) Terminar\n")
disp("")
iZ = input ("¿Qué opción elige? ")
if iZ == 1 then
Opcion1
elseif iZ == 2 then
Opcion2
elseif iZ == 3 then
Opcion3
elseif iZ == 4 then
Opcion4
elseif iZ == 5 then
Opcion5
elseif iZ == 6 then
Opcion6
elseif iZ == 7 then
Opcion7
elseif iZ == 8 then
Opcion8
elseif iZ == 9 then
Opcion9(curvas)
elseif iZ == 10 then
Opcion10
elseif iZ == 11 then
Opcion11
elseif iZ == 12 then
Opcion12
end
end
endfunction

function Opcion1()
x= -%pi:0.01:%pi;
y= x.* sin (16*x);
plot(x,y);
plot(x,x,"r");
plot(x,-x,"r");
endfunction

function Opcion2()
x= -%pi:0.01:%pi;
y= x.* sin (10*x);
iZ = 1
while iZ >= 1 & iZ <= 3
mprintf("\n Ondas con caracteres: \n (1) Ondas con puntos \n (2) Ondas con signo positivo +\n (3) Ondas con signo negativo -\n (4) Terminar")
iZ = input("¿Qué caracter elige? ")
if iZ == 1 then
plot(x,y,".")
elseif iZ == 2 then
plot(x,y,"+")
elseif iZ == 3 then
plot(x,y,"-")
end
end
endfunction

function Opcion3()
x=0.001:0.1:10;
n=length(x);
for i=1:n
y(i)=(x(i))
end
plot(x,y,"o")
endfunction

function Opcion4()
iZ = input("¿Cuántos números de la serie fibonacci desea? ")
x(1)=1;
x(2)=1;
for n = 3:z;
x(n)=x(n-1)+ x(n-2);
end
plot(x,".")
endfunction

function Opcion5()
dI=-10:.01:10;
L= length(dI)
y=-log(dI^2+1)+sin(dI)+10;

iA=y(1);
iB=y(1);
for iC=2:L;
x=y(c)
if x>=iA then;
iA=x;
j=iC;
else
end
if s<=iB then
iB=x;
t=iC;
end
end
xmin= i(t);
xmax= i(j);
plot (i,y)
plot (xmax,a,"g*")
plot (xmin,b,"r*")
endfunction

function opcion6()
xc = 4
yc = 4
r = 4
t = 0:.01:2*%pi;
x = xc + r * cos(t);
y = yc + r * sin(t);
x2 = xc + (r/2) * cos(t);
y2 = yc + (r/2) * sin(t);
plot(x, y)
plot(x+(2*r),y+(2*r))
plot(x2+ (r/4),y2+(2*r))
plot(x2+(2*r),y2+(r/4))
endfunction

function opcion7()
Matplot(1:30)
a = gca();
a.rotation_angles = [-75, -330];
endfunction

function opcion8()
for x = 1:6
aleatorio(x)=min(0)+fix(rand()*(max(50)-min(0)+1));
end
disp(aleatorio)
z = 1
while z >= 1 & z <= 3
mprintf(" \nGráficas:\n (1) Gráfica de pay\n (2) Gráfica de barras\n (3) Gráfica de columnas\n (4) Terminar\n ")
z = input ("¿Qué estilo de gráfica desea? ")
if z == 1 then
pie(aleatorio)
elseif z == 2 then
barh(aleatorio)
elseif z == 3 then
bar(aleatorio)
end
end

endfunction

function opcion9()

t=linspace(0,8*%pi);
param3d(t.*sin(t),t.*cos(t),3*t)


endfunction

function opcion10()
t= linspace(0,2*%pi,50)
y = sin(t)
plot2d3(t,y)
title('ensayo')
ylabel('Amplitud')
xlabel('Muestras')
plot(t,y,"o")
endfunction

function opcion11()
archivo = input("¿Cuál es el nombre del archivo? ","string")
n = input("¿Cuántas columnas tiene el archivo? ")
archivo = "c:\"+archivo
// (Para mac) archivo = "/pruebas/"+archivo
datos = read(archivo,-1,n)	// Leer el archivo
disp(datos)

f=1
while f>=1 & f<=2
mprintf(" \nOpciones:\n (1) Graficar todas las columnas\n (2) Graficar una columna en especifico\n (3) Terminar\n ")
f= input("¿Qué opción elige? ")
if f==1 then
plot(datos)
title("Gráfica de todos los valores de la matriz")
elseif f==2
t= input ("¿Qué columna desea graficar? ")
x=datos( : , t:t )
plot(x)
end
end
endfunction

function opcion12()
archivo = input("¿Cuál es el nombre del archivo? ","string")
n = input("¿Cuántas columnas tiene el archivo? ")
archivo = "E:\"+archivo
// (Para mac) archivo = "/pruebas/"+archivo
datos = read(archivo,-1,n)
disp(datos)
Matplot(datos)

z = 1
while z >= 1 & z <= 3
mprintf(" \nOpciones:\n (1) flip vertical\n (2) flip horizontal\n (3) Figura original\n (4) Terminar\n ")
z = input ("¿Qué opción desea? ")
if z == 1 then
datos1 = flipdim( datos , 1 )
Matplot(datos1)
elseif iop == 2
datos2 = flipdim( datos , 2 )
Matplot(datos2)
elseif z == 3
Matplot(datos)
end
end
endfunction