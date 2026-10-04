/* ===== ENUNCIADO (literal del PDF) ===== */
//                                         PR�CTICA                               2
// Estructura de un Programa en C++
// En esta pr�ctica presentamos cu�l es la estructura b�sica de un programa escrito en C++, as� como los
// mecanismos para traducir a C++ los algoritmos que se realizan en clase de teor�a. Tambi�n servir� para
// ejercitar la estructura secuencial de acciones. Es primordial que al final de esta sesi�n sepas c�mo
// traducir a C++ un programa escrito en seudoc�digo y c�mo escribir programas que utilizan solo la
// estructura secuencial.
// 1 Estructura B�sica de un Programa en C++
// La estructura b�sica de un programa escrito en C++ es la que puede verse a continuaci�n:
// #include <nombre_de_fichero>                   //directivas al preprocesador
// using namespace std;                           // inicio del bloque principal
// int main()                              // definiciones de constantes
// {
//         const tipo_dato cte_1=valor_1;
//    tipo_1 var_1;                        // declaraciones de variables
//    tipo_2 var_2, var_3;
//    ...
//    ...                                  // cuerpo del bloque principal
// }
// // definiciones de funciones
//                                 Esquema b�sico de un programa escrito en C++
// Sobre esta estructura podemos hacer las siguientes observaciones:
//                                                                                                               Metodolog�a de la Programaci�n. Pr�ctica 2.
//                                                                                                                                                                                      Estructura de un programa en C++
// 1.1 C�mo comienza
// Todos los programas en C++ comienzan habitualmente por una serie de sentencias que van precedidas
// de una almohadilla #. Estas �rdenes son directivas al preprocesador, y constituyen una ayuda para
// que el compilador sea m�s eficaz, preparando el fichero fuente que se desea compilar.
// Entre este tipo de �rdenes se encuentran las �rdenes #include, cuya misi�n es, de cara a la
// compilaci�n, incrustar en el fichero C++ el contenido de otro fichero que se especifica a continuaci�n.
// As�, la forma en la que se especifica una directiva #include es la siguiente:
// #include <nombre_de_fichero>
// Lo que conseguimos con #include es poder trocear el contenido de un programa en distintos ficheros
// que se pueden editar por separado, y reunirlo todo de cara a su compilaci�n. Otra ventaja de esta
// estrategia es que alguna de las partes puede reutilizarse (incluirse) en diferentes programas.
// Fichero C++      Lo que se compila
//                  realmente
// #include <fich>
//                                   fich
// El principal uso que haremos de #include por el momento ser� el de incluir un fichero auxiliar que
// sirve para informar al compilador de d�nde puede encontrar el prototipo (formato) de algunas de las
// operaciones utilizadas muy habitualmente, como pueden ser las de lectura y escritura. Llamamos a
// esos ficheros, ficheros de cabecera.
// As�, por ejemplo, el fichero de cabecera iostream (de input output stream) contiene los prototipos
// de las funciones de lectura y escritura cin y cout que usaremos muy habitualmente. Para incluirlo
// debemos escribir al comienzo del programa la l�nea:
//                                                     #include <iostream>
//                                                                                                               Metodolog�a de la Programaci�n. Pr�ctica 2.
//                                                                                                                                                                                      Estructura de un programa en C++
// Espacio de nombres std:
// Un espacio de nombres es una regi�n declarativa que proporciona un alcance a los identificadores (los
// nombres de los tipos, funciones, variables, etc.) que contiene. Los espacios de nombres se utilizan
// para organizar el c�digo en grupos l�gicos y evitar colisiones de nombres que pueden ocurrir
// especialmente cuando la base de c�digo incluye varias bibliotecas. La alternativa a esta declaraci�n es
// especificar el espacio de nombres al que pertenece el identificador utilizando el operador de �mbito
// (::) al referirse a tipos, funciones, variables declaradas de manera est�ndar en el lenguaje. Por ejemplo,
// deber�a escribirse std::cout en lugar de cout.
//                                                            using namespace std;
// 1.2 El bloque principal
// Lo siguiente que debe aparecer en nuestro fichero en C++ es el bloque principal (main), que contiene
// las instrucciones del programa. El bloque principal comienza con la l�nea:
//                                                             int main()
// siguiendo despu�s un bloque de c�digo.
// 1.3 Bloques: las llaves
// Un bloque es un conjunto de sentencias (instrucciones) consecutivas en C++. Para crear un bloque
// basta encerrar las sentencias entre llaves { }. La llave de apertura "{" marca el comienzo de un bloque
// de sentencias, bloque que debe finalizar con una llave de cierre "}".
// La correspondencia de llaves es muy importante.
//                        NO DEBE HABER NINGUNA "{" SIN SU CORRESPONDIENTE "}"
// Uno de estos bloques (en general, no es el �nico en un programa) es el bloque principal, que acabamos
// de comentar y que has podido ver en el cuadro del esquema b�sico de un programa.
// Nota: Para facillitar la lectura del programa, es conveniente utilizar correctamente la indentaci�n de
// cada l�nea. Recuerda que CodeBlocks lo ajusta de manera autom�tica: Plugins/Source code formatter,
// o bien, seleccionar (todo con Ctrl+A), bot�n derecho, Format use AStyle
//                                          Metodolog�a de la Programaci�n. Pr�ctica 2.
//                                                                          Estructura de un programa en C++
// 1.4 La zona de declaraci�n de variables
// C++ permite declarar variables en cualquier lugar de un programa. Sin embargo, nosotros seguiremos
// el criterio de colocar las declaraciones de variables al comienzo del bloque principal. Hablaremos un
// poco m�s sobre ello cuando trabajemos con funciones.
// La declaraci�n de variables debe ajustarse al siguiente formato: tipo de la variable, espacio en blanco,
// nombre de variable, punto y coma.
//                                          tipoDeVariable nombreDeVariable;
// Tambi�n es posible declarar en una misma l�nea varias variables del mismo tipo, separando sus
// nombres por comas y terminando en punto y coma:
//                                tipoDeVariable nombre1, nombre2..., nombreN;
// Los tipos pueden ser los predefinidos por el lenguaje o los que el usuario define en la zona de definici�n
// de tipos de usuario. Los tipos predefinidos son los siguientes:
// Entero:     int
// Car�cter:   char
// Real:       float
// L�gico:     bool
// Sin valor:  void
// Por ejemplo, para definir dos variables, una entera llamada i y otra de tipo real llamada r escribir�amos:
// int i;
// float r;
// El tipo l�gico no exist�a como tal tipo en C cuando este se desarroll�; se incluy� en una ampliaci�n
// posterior. Nuestro compilador lo identifica como tipo bool , que toma dos valores true o false. Sin
// embargo, internamente el tipo bool se almacena como un int, entendiendo que false=0 y true=1.
//                          Metodolog�a de la Programaci�n. Pr�ctica 2.
//                                                          Estructura de un programa en C++
// 1.5 Los identificadores
// Los identificadores son los nombres que daremos a los objetos (constantes, variables...) en nuestro
// programa. Deben cumplir una serie de reglas para que sean v�lidos:
// � Pueden contener letras, n�meros y caracteres de subrayado ( _ ). Deben comenzar por una letra.
// � No pueden contener espacios en blanco.
// � No deben sobrepasar una longitud m�xima. Esta longitud depende del compilador utilizado.
// 1.6 El punto y coma ';'
// El punto y coma (';') es quiz�s el car�cter que m�s veces aparece en los programas en C++. En C++ el
// ';' es un finalizador de sentencias. El compilador reconoce el fin de una sentencia por la presencia del
// punto y coma.
//                                        El ';' es un finalizador de sentencias
// El ';' debe aparecer al final de cada sentencia (declaraci�n de variable o instrucci�n ejecutable) de un
// programa en C++.
// 1.7 Los comentarios
// Los comentarios son textos que se insertan en el programa para servir de aclaraci�n al programador,
// a�aden legibilidad al c�digo.
// Los comentarios se deben encerrar entre estos caracteres ("estilo C"):
//     � Comienzo de comentario: /*
//     � Fin de comentario: */
// Por ejemplo:
//                                 /* Este es un comentario que ocupa una l�nea */
//                                 /* Este es un comentario v�lido
//                                 que ocupa varias l�neas
//                                 */
// O bien ("estilo C++") comenzando el comentario con //, C++ considera comentario el texto que vaya
// hasta el fin de l�nea. Por ejemplo:
//                                 // Este es un comentario v�lido de una l�nea
//                                 // Este es un comentario v�lido
//                                 // de dos l�neas
// Nota: en CodeBlocks puedes comentar un bloque ya escrito. Selecciona el bloque de c�digo que
// quieres comentar y pulsa Ctrl + Shift + C
//                                                                                                               Metodolog�a de la Programaci�n. Pr�ctica 2.
//                                                                                                                                                                                      Estructura de un programa en C++
// 1.8 Sobre las may�sculas y las min�sculas
// C++ es un lenguaje SENSIBLE al uso de may�sculas o min�sculas en los identificadores y en las palabras
// clave. Por ejemplo, los siguientes identificadores son DIFERENTES: contador, Contador, CONTADOR,
// conTAdor...
// 2 Traducci�n de seudoc�digo a C++. Un ejemplo.
// Consideremos un ejemplo de programa realizado en seudoc�digo para su traducci�n a lenguaje C++.
// A trav�s de �l iremos dando las pautas de traducci�n, que ampliaremos en sucesivas pr�cticas
// conforme se vayan introduciendo nuevas estructuras de programaci�n. En este ejemplo solamente se
// considerar� la composici�n secuencial de sentencias. El problema es el siguiente:
// Calcular el volumen de un cilindro dada su altura y el radio de la base.
// Soluci�n en seudoc�digo
// Interfaz:
//    Entrada: real r, h
//    Salida: real vol
// Efecto:
//  Condiciones previas: r>0, h>0
//  Efecto producido: vol=3.14*r*r*h
// Algoritmo C�lculo Volumen Cilindro
// constantes
//    PI = 3.14
// variables
//    real r, h
//    real vol
//    real base
// principio
//    leer (r,h)
//    base = PI*r*r
//    vol = base * h
//    escribir(vol)
// fin
//                                                      Metodolog�a de la Programaci�n. Pr�ctica 2.
//                                                                                      Estructura de un programa en C++
// Traducci�n a C++
// Para la traducci�n seguiremos el siguiente esquema:
// Algoritmo Nombre Algoritmo    // No hay un equivalente en C++ para esta l�nea
//                               #include <nombreFichero> // ver secci�n 2.2
// constantes                    int main()
//       unaConstante = unValor  {
//       ...
//                                  const tipoCte unaConstante = unValor;
// variables
//       unTipo unaVariable         unTipo unaVariable;
//       otroTipo otraVariable      otroTipo otraVariable;
//       ...                        ...
// principio
// instrucciones                    instrucciones
// fin                           }
//                               Traducci�n de seudoc�digo a C++
// 2.1 Traducci�n de las palabras reservadas.
// Las palabras reservadas que utilizamos en seudoc�digo deben traducirse por sus correspondientes en
// C++. Aunque en C++ no existe palabra clave para algunos de los t�rminos del seudoc�digo
// (variables...), s� que debes respetar un cierto paralelismo entre las dos estructuras, como puedes ver
// en el cuadro de anterior. Vale la pena resaltar dos de los comentarios realizados en el punto 1:
//     � Los identificadores no pueden contener espacios en blanco (pto. 1.7.). Se recomienda poner
//          especial atenci�n durante su traducci�n.
//     � El uso del punto y coma (pto. 1.8.) al final de las sentencias C++.
// Las sentencias ser�n iguales a las de seudoc�digo. La �nica precauci�n a tener en cuenta es que los
// tipos (para la definici�n de las variables) y algunos operadores se escriben de distinta forma que en
// seudoc�digo. Para su traducci�n adjuntamos la siguiente tabla:
//                                            Metodolog�a de la Programaci�n. Pr�ctica 2.
//                                                                            Estructura de un programa en C++
// Tipos                           Operadores Relacionales
// � Entero: int
// � Car�cter: char                == a == b  Igual
// � Real: float
// � L�gico: bool                   a != b    Distinto ()
// Operadores Aritm�ticos          < a<b      Menor
// + a + b Suma
// - a - b Resta; cambio de signo  > a>b      Mayor
// * a * b Producto
// div a / b Divisi�n entera       <= a <= b  Menor o igual
// / a / b Divisi�n real
// mod a % b Resto de la divisi�n  >= a >= b  Mayor o igual
// Operadores L�gicos              Operador Asignaci�n
// NOT ! a  Negaci�n               =  c = b Asigna el valor de b a c
// AND a && b y
// OR a || b o
// 2.2 Notas sobre la estructura del programa.
// La estructura del programa C++ ser� la misma que la de seudoc�digo salvo por las siguientes
// excepciones:
// El nombre de algoritmo y las directivas #include
// Observa que en C++ no se le da un nombre al algoritmo dentro del c�digo del mismo. Si quieres
// incluirlo como referencia, puedes hacerlo usando un comentario. Asimismo, no hay nada en
// seudoc�digo que equivalga a las directivas #include de C++, aunque no debes olvidar incluirlas.
// 2.3 Traducci�n del programa.
// Comenzaremos el programa con unas cuantas l�neas de comentarios para aclarar cu�l es el prop�sito
// del programa, la fecha de creaci�n, cu�les son los datos de entrada y los de salida, y, en caso de que
// pueda producirse alg�n error cu�l puede ser la causa. Estas l�neas no son instrucciones y por tanto no
// se ejecutar�n. Puede pensarse que son superfluas, pero son de gran utilidad cuando se vuelve a leer
// el programa despu�s de haber transcurrido un tiempo desde que se escribi�.
// Un esquema general para estos comentarios puede ser:
//                                                                                                               Metodolog�a de la Programaci�n. Pr�ctica 2.
//                                                                                                                                                                                      Estructura de un programa en C++
// /*
//    FECHA: <la fecha de creaci�n>
//    AUTOR: <nombre del programador>
//    DESCRIPCI�N:
//       < qu� es lo que hace el programa >
//    ENTRADAS: <nombre de las variables de entrada y c�mo deben ser >
//    SALIDAS: <variables de salida>
//    ERRORES:
//       <Condiciones de error, a qu� se deben y c�mo evitarlas.>
// */
// Seguidamente introducimos una directiva #include. Como vamos a leer por teclado y escribir por
// pantalla, usamos el fichero de cabecera para entradas y salidas est�ndar, iostream
// #include <iostream>
// Despu�s de esta directiva tambi�n incluiremos
// using namespace std;    // esta debe terminar en punto y coma
// Ahora aparece el bloque principal, que comenzar� por:
// int main()
// {
// Seguimos traduciendo la zona de constantes.
// const float PI = 3.14;
// Seguidamente aparece la zona de declaraci�n de variables. Para la definici�n usaremos los tipos
// correspondientes en C++ (int, float, char...). Cada l�nea de declaraci�n debe terminar en punto y
// coma.
//                                                          Metodolog�a de la Programaci�n. Pr�ctica 2.
//                                                                                          Estructura de un programa en C++
// float radio, altura;
// float vol;
// float base;
// Al tratarse de variables del mismo tipo podr�amos haberlas declarado todas en la misma l�nea:
// float radio, altura, vol, base;
// Es una buena costumbre comentar para qu� sirve cada variable, facilitando, de este modo, la lectura
// y comprensi�n del programa.
// float radio, altura;  // entrada: radio de la base; altura del cilindro
// float vol;            // salida: volumen del cilindro
// float base;           // �rea de la base del cilindro
// Comenzar� el grupo de instrucciones del bloque principal. Iremos traduci�ndolas l�nea a l�nea, usando
// los operadores adecuados y acabando cada instrucci�n en punto y coma, hasta llegar al final.
// Aunque no es imprescindible, s� es conveniente indicar que el programa ha terminado correctamente
// mediante la siguiente sentencia:
// return 0;
// Finalmente, el programa acabar� con la llave de cierre.
// }
//                                                                                                               Metodolog�a de la Programaci�n. Pr�ctica 2.
//                                                                                                                                                                                      Estructura de un programa en C++
// 2.3.1 Escritura por pantalla: cout
// La instrucci�n que usaremos para la escritura de resultados, o cualquier otra cosa, en la pantalla es la
// funci�n est�ndar cout. Siempre va acompa�ado de, al menos, un operador de inserci�n (<<). La
// sintaxis se detalla a continuaci�n:
//                                       cout << "texto" << variable << ...;
// As� por ejemplo podemos usar cout << para mostrar un mensaje por pantalla:
//    cout << "Introduce el valor del radio (valor positivo)";
// Para mostrar el valor de una variable:
//    cout << vol;
// O, si queremos una salida m�s elaborada:
//    cout << "Volumen = " << vol << endl;
// donde endl fuerza un salto de l�nea (la siguiente escritura aparecer� en una l�nea nueva).
//                                                                Metodolog�a de la Programaci�n. Pr�ctica 2.
//                                                                                                Estructura de un programa en C++
// 2.3.2 Lectura por teclado: cin
// La instrucci�n que usaremos para la lectura de datos desde el teclado es la funci�n est�ndar cin.
// Siempre va acompa�ada de un operador de extracci�n (>>, que es el opuesto al de
// inserci�n del cout). La sintaxis se detalla a continuaci�n:
//                                 cin >> variable;
// En nuestro ejemplo leemos el valor del radio y la altura as�:
// cin >> radio;
// cin >> altura;
// En principio, con estas instrucciones ser�a suficiente para que el programa funcionase. Sin embargo,
// es necesario a�adir alg�n aviso de cara al usuario, para que este sepa que el ordenador est� esperando
// que introduzca un dato, qu� valor debe introducir y qu� condiciones debe cumplir este valor
// (precondici�n). Estos avisos ser�n escritos en pantalla (mediante cout) antes de las correspondientes
// �rdenes de lectura.
// ...
// cout << "Introduce el valor del radio (valor positivo)";
// cin >> radio;
// cout <<"Introduce el valor de la altura (valor positivo)";
// cin >> altura;
// NOTA: en realidad los nombres completos de cout y cin son std::cout y std::cin, pero gracias a
// la directiva using namespace std; podemos evitar poner el prefijo std, y escribir solo cout y cin.
//                                Metodolog�a de la Programaci�n. Pr�ctica 2.
//                                                                Estructura de un programa en C++
// 2.4 El programa completo
// La traducci�n a C++ del seudoc�digo del algoritmo Calculo_Volumen_Cilindro ser�a:
// /*
//    FECHA:
//    AUTOR:
//    DESCRIPCI�N:
//       Calcula el �rea de un cilindro, conocidos su radio y altura.
//    ENTRADAS: radio y altura. Deben ser positivos.
//    SALIDAS: vol
//    ERRORES:
//       El programa no funciona si los valores de radio y altura son negativos.
// */
// #include <iostream>
// using namespace std;
// int main()
// {
//    const float PI = 3.14;
//    float radio, altura; // entrada: radio de la base; altura del cilindro
//    float vol;            // salida: volumen del cilindro
//    float base;           // �rea de la base del cilindro
//    cout << "Introduce el valor del radio (valor positivo)";
//    cin >> radio;
//    cout << "Introduce el valor de la altura (valor positivo)";
//    cin >> altura;
//    base = PI * radio * radio;
//    vol = base * altura;
//    cout << "El volumen del cilindro de radio " << radio << " y altura ";
//    cout << altura << " es " << vol;
//    return 0;
// }
// Gu�rdalo con el nombre P2EJ1.
//                        Metodolog�a de la Programaci�n. Pr�ctica 2.
//                                                        Estructura de un programa en C++
// 3 Sesi�n de pr�cticas
// 3.1 Traduce programas a C++
// Con este ejercicio repasar�s:
// � c�mo traducir a C++ un programa escrito en seudoc�digo.
// � c�mo editar, grabar, compilar y ejecutar un programa en CodeBlocks.
// 3.1.1 Primer programa
// Acaba de traducir el siguiente algoritmo. Su prop�sito es leer una letra may�scula y escribir la posici�n
// que ocupa en el alfabeto. (Puedes descargarlo del aula virtual, P2Ej2)
// Interfaz:
//    Entrada: car�cter letra
//    Salida: entero posicion
// Efecto:
//  Condiciones previas: letra may�scula
//  Efecto producido: posici�n que ocupa la letra en el alfabeto
// Algoritmo posici�n letra may�scula
//    car�cter letra
//    entero posici�n
// principio
//    leer(letra)
//    posici�n = ascii(letra) - ascii('A') + 1
//    escribir(posici�n);
// fin
// La traducci�n que tienes que completar es:
// (PISTA: faltan cosas donde encuentres ... , aunque faltan m�s cosas que las indicadas):
// /*
//    FECHA:
//    AUTOR:
//    DESCRIPCI�N:
//       Dada una letra may�scula calcula cu�l es su posici�n en el
//       alfabeto
//    ENTRADAS: letra (la letra may�scula)
//    SALIDAS: posici�n (la posici�n en el alfabeto)
//    ERRORES:
//                                                                                                               Metodolog�a de la Programaci�n. Pr�ctica 2.
//                                                                                                                                                                                      Estructura de un programa en C++
//       El programa es incorrecto si la letra no es una may�scula
// */
// #include ...                 ...('A') + 1
// using namespace std;
// ...main()
//    ...
//    posicion = int(letra)1 -
//    ...
//    return 0;
// }
// Completa el programa, gr�balo, comp�lalo y ejec�talo.
// 3.1.2 Segundo programa
// Traduce el siguiente algoritmo. Su prop�sito es convertir una cantidad positiva de segundos a su
// equivalente en horas, minutos y segundos.
// Interfaz
//  Entrada: entero cantSegundos
//  Salida: entero h, m, s
// Efecto
//  Condiciones previas: cantSegundos >=0
//  Efecto producido: horas (h), minutos (m) y segundos (s) y
//      cantSegundos = h*3600+m*60+s, h>=0, 0<=m<60, 0<=s<60
// Algoritmo Convertir horas minutos segundos
// variables
//    entero cantidad
//    entero h, m, s
//    entero auxiliar
// principio
//    leer(cantidad)
//    h = cantidad div 3600
//    auxiliar = cantidad mod 3600
//    m = auxiliar div 60
//    s = auxiliar mod 60
//    escribir(h, m, s)
// fin
// 1 Realmente, esta operaci�n es un cambio de tipo (cast), de tipo char a int. Este cambio lo hace
// devolviendo el c�digo ascii (un entero) del car�cter.
//                                                     Metodolog�a de la Programaci�n. Pr�ctica 2.
//                                                                                     Estructura de un programa en C++
// Edita el programa, gr�balo, comp�lalo y ejec�talo.
// 3.2 Corrige programas con errores
// Con este ejercicio repasar�s:
// � C�mo traducir a C++ un programa escrito en seudoc�digo.
// � C�mo recuperar, grabar, compilar y ejecutar un programa.
// � C�mo utilizar el compilador para corregir errores en los programas.
// Estos programas contienen errores. El objetivo del ejercicio es que los encuentres y los corrijas. Es
// aconsejable que intentes detectarlos por simple inspecci�n. Si no lo consigues puedes utilizar el
// compilador de CodeBlocks. Encontrar�s unos cuantos errores bastante comunes. Ser�a aconsejable
// que los recordases para no cometerlos en el futuro. Hay errores l�xicos, sint�cticos e incluso puede
// que falten o sobren cosas.
// 3.2.1 Primer programa
// (Puedes descargarlo del aula virtual, P2Ej3)
// /*
//    FECHA:
//    AUTOR:
//    DESCRIPCI�N:
//       Calcula la velocidad en m/s de un corredor de una carrera de 1500 m.,
//       conocido el tiempo que tarda en realizar la prueba.
//    ENTRADAS: minutos, cantidad de minutos invertidos por el corredor
//                     segundos, cantidad de segundos invertidos por el corredor
//    SALIDAS: velocidad, ser velocidad = 1500/(60*minutos+segundos)
//    ERRORES:
//       El programa es incorrecto si minutos y segundos no son positivos
// */
// #include <iostream>
// using namespace std;
// int main()
// {
//    const int DISTANCIA=1500
//    cin >> minutos;
//    cin >> segundos
//    velocidad := 1500/(60*minutos+segundos);
//    escribir(velocidad);
//    return 0;
// }
//                                               Metodolog�a de la Programaci�n. Pr�ctica 2.
//                                                                               Estructura de un programa en C++
// 3.2.2 Segundo programa
// (Puedes descargarlo del aula virtual, P2Ej4)
// /*
//    FECHA:
//    AUTOR:
//    DESCRIPCI�N:
//       Convierte una distancia dada en pies a su equivalente en yardas,
//       pulgadas, cent�metros y metros.
//    ENTRADAS: pies, distancia medida en pies
//    SALIDAS: yardas, pulgadas, cent�metros, metros = distancia medida en
//                     esas unidades
//    ERRORES:
//       El programa es incorrecto si pies es negativo
// */
// #include <iostream>
// using namespace std;
// int main()
// {
//    real pies;
//    yardas, pulgadas, centimetros, metros: real;
//    yardas = pies/3.0;
//    pulgadas = = pies * 12.0;
//    centimetros = 2'54 * pulgadas;
//    metros = centimetros / 100;
//    return 0;
// }
// 3.3 Realizaci�n de programas
// 1. Programa que lea un n�mero entero de dos cifras y cree otro con esas cifras invertidas. Ejemplo,
//      si introducimos 45 deber�a generar el 54.
// 2. Programa que descodifique la fecha expresada como un entero de 6 d�gitos (DDMMAA), es decir,
//      el a�o viene representado en las unidades y decenas, el mes en las centenas y millares y el d�a en
//      las decenas y centenas de millar. Ejemplo: para una entrada como 121025 debe mostrar en
//      pantalla 12-10-2025.
/* ======================================= */

/*

    FECHA: <la fecha de creación>
    AUTOR: <nombre del programador>
    DESCRIPCIÓN:
    < qué es lo que hace el programa >
    ENTRADAS: <nombre de las variables de entrada y cómo deben ser >
    SALIDAS: <variables de salida>
    ERRORES: <Condiciones de error, a qué se deben y cómo evitarlas.>


#include <nombre_de_fichero>            //directivas al preprocesador

using namespace std;

int main()                              // inicio del bloque principal
{
    const tipo_dato cte_1 = valor_1;    // definiciones de constantes
    tipo_1 var_1;                       // declaraciones de variables

    tipo_2 var_2, var_3;
    ...                                 // cuerpo del bloque principal
    ...
}

// definiciones de funciones

*/
