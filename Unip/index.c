 #include<stdio.h>
2 #include<stdlib.h>
3 
4 //Define o tam que o vetor tem
5 #define tamanho 7
6 
7 #define tam_bucket 100
8 #define num_bucket 10
9 #define max 10
10 
11 typedef struct {
12 int topo;
13 int balde[tam_bucket];
14 }bucket;
15 
16 
17 //Algoritmo de ordenacao BubbleSort
18 void BubbleSort(int* v, int tam) {
19 int i, j = tam, k;
20 int trocou;
21 do {
22 tam--;
23 trocou = 0;
24 for (i = 0; i < tam; i++) {
25 if (v[i] > v[i + 1]) {
26 int aux = 0;
27 aux = v[i];
28 v[i] = v[i + 1];
29 v[i + 1] = aux;
30 trocou = 1;
31 for (k = 0; k < j; k++)
32 printf("%d ", v[k]);
33 printf("\n");
34 }
35 }
36 } while (trocou);
37 }
38 
39 //Algoritmo de ordenacao QuickSort
40 void QuickSort(int* v, int tam) {
41 int j = tam, k;
42 if (tam <= 1)
43 return;
44 else {
45 int pivot = v[0];
46 int a = 1;
47 int b = tam - 1;
48 do {
49 while ((a < tam) && (v[a] <= pivot))
50 a++;
51 while (v[b] > pivot)
52 b--;
53 if (a < b) { // faz troca
54 int temp = v[a];
55 v[a] = v[b];
56 v[b] = temp;
57 a++;
58 b--;
59 }
60 for (k = 0; k < j; k++)
61 printf("%d ", v[k]);
62 printf("\n");
63 } while (a <= b);
64 // troca pivo
65 v[0] = v[b];
66 v[b] = pivot;
67 // ordena sub-vetores restantes
68 QuickSort(v, b);
69 QuickSort(&v[a], tam - a);
70 for (k = 0; k < j; k++)
71 printf("%d ", v[k]);
72 printf("\n");
73 }
74 }
75 
76 //Algoritmo de ordenacao InsertionSort
77 void InsertionSort(int* v, int tam) {
78 int i, j, k, chave;
79 for (j = 1; j < tam; j++) {
80 chave = v[j];
81 i = j - 1;
82 while ((i >= 0) && (v[i] > chave)) {
83 v[i + 1] = v[i];
84 i--;
85 }
86 v[i + 1] = chave;
87 for (k = 0; k < j; k++)
88 printf("%d ", v[k]);
89 printf("\n");
90 }
91 for (k = 0; k < j; k++)
92 printf("%d ", v[k]);
93 printf("\n");
94 }
95 
96 // Busca Binária para achar o local a se inserido
97 // no vet[inicio..fim]
98 int buscaBin(int* vet, int item, int inicio, int fim)
99 {
100 if (fim <= inicio)
101 return (item > vet[inicio]) ? (inicio + 1) : inicio;
102 
103 int meio = (inicio + fim) / 2;
104 
105 if (item == vet[meio])
106 return meio + 1;
107 
108 if (item > vet[meio])
109 return buscaBin(vet, item, meio + 1, fim);
110 return buscaBin(vet, item, inicio, meio - 1);
111 }
112 
113 
114 //Algoritmo de ordenacao SelectionSort
115 void insertionBinSort(int* vet, int tam)
116 {
117 int atual, loc, aux, k, valor;
118 
119 for (atual = 1; atual < tam; ++atual)
120 {
121 aux = atual - 1;
122 valor = vet[atual];
123 // achar o locat onde o valor deve ser inserido
124 loc = buscaBin(vet, valor, 0, aux);
125 // Move all elements after location to create space
126 while (aux >= loc)
127 {
128 vet[aux + 1] = vet[aux];
129 aux--;
130 }
131 vet[aux + 1] = valor;
132 for (int z = 0; z < tam; z++) {
133 printf("%d ", vet[z]);
134 if (z == atual)
135 printf(" ");
136 }
137 printf("\n");
138 }
139 }
140 
141 
142 
143 //Algoritmo de ordenacao SelectionSort
144 void SelectionSort(int* v, int tam) {
145 int i, j, k, min;
146 for (i = 0; i < (tam - 1); i++) {
147 min = i;
148 for (j = (i + 1); j < tam; j++) {
149 if (v[j] < v[min]) {
150 min = j;
151 }
152 }
153 if (i != min) {
154 int swap = v[i];
155 v[i] = v[min];
156 v[min] = swap;
157 for (k = 0; k < tamanho; k++)
158 printf("%d ", v[k]);
159 printf("\n");
160 }
161 }
162 }
163 
164 //Algoritmo de ordenacao HeapSort
165 void Heapfica(int* v, int pai, int tam) {
166 int percorreu, folhamaior, temp, k;
167 percorreu = 0;
168 while ((pai * 2 <= tam) && (!percorreu)) {
169 if (pai * 2 == tam)
170 folhamaior = pai * 2;
171 else if (v[pai * 2] > v[pai * 2 + 1]) //qual o filho maior ?
172 //pai*2 = esquerda, pai*2+1 direita
173 folhamaior = pai * 2; // filho esquerda
174 else
175 folhamaior = pai * 2 + 1; //filho direita
176 
177 if (v[pai] < v[folhamaior]) { // o filho é maior que o pai
178 temp = v[pai];
179 v[pai] = v[folhamaior];
180 v[folhamaior] = temp;
181 pai = folhamaior; //verifica novamente a apartir
182 //do filho trocado
183 }
184 else
185 percorreu = 1; //chegou na folha final, saia do laço
186 for (k = 0; k < tamanho; k++)
187 printf("%d ", v[k]);
188 printf("\n");
189 }
190 }
191 
192 void MontaHeapMax(int* v, int tam) {
193 for (int i = (tam / 2); i >= 0; i--) //Heap Máximo inicial
194 Heapfica(v, i, tam - 1);
195 }
196 
197 
198 void HeapSort(int* v, int tam) {
199 int i, k, temp;
200 MontaHeapMax(v, tam); //Heap Máximo inicial
201 for (i = tam - 1; i >= 1; i--) { // troca o primeiro (o maior) com o último
202 temp = v[0];
203 v[0] = v[i];
204 v[i] = temp;
205 Heapfica(v, 0, i - 1); //refaz o Heap
206 }
207 }
208 
209 void merge(int* vetor, int comeco, int meio, int fim) {
210 int posicao1 = comeco, posicao2 = meio + 1, posicaoAux = 0, tam = fim - comeco + 1;
211 int* vetAux;
212 vetAux = (int*)malloc(tam * sizeof(int));
213 
214 while (posicao1 <= meio && posicao2 <= fim) {
215 if (vetor[posicao1] < vetor[posicao2]) {
216 vetAux[posicaoAux] = vetor[posicao1];
217 posicao1++;
218 }
219 else {
220 vetAux[posicaoAux] = vetor[posicao2];
221 posicao2++;
222 }
223 posicaoAux++;
224 }
225 
226 while (posicao1 <= meio) { //Caso ainda haja elementos na primeira metade
227 vetAux[posicaoAux] = vetor[posicao1];
228 posicaoAux++;
229 posicao1++;
230 }
231 
232 while (posicao2 <= fim) { //Caso ainda haja elementos na segunda metade
233 vetAux[posicaoAux] = vetor[posicao2];
234 posicaoAux++;
235 posicao2++;
236 }
237 
238 for (posicaoAux = comeco; posicaoAux <= fim; posicaoAux++) { //Move os elementos de 
volta para o vetor original
239 vetor[posicaoAux] = vetAux[posicaoAux - comeco];
240 printf("%d ", vetor[posicaoAux]);
241 }
242 printf("\n");
243 
244 free(vetAux);
245 }
246 
247 void mergeSort(int* vetor, int comeco, int fim) {
248 if (comeco < fim) {
249 int meio = (fim + comeco) / 2;
250 //apenas´para mostra na tela a 1a metade
251 for (int i = comeco; i <= meio; i++) {
252 printf("%d ", vetor[i]);
253 }
254 printf("\n");
255 mergeSort(vetor, comeco, meio);
256 //apenas´para mostra na tela a 2a metade
257 for (int i = meio+1; i <= fim; i++) {
258 printf("%d ", vetor[i]);
259 }
260 printf("\n");
261 mergeSort(vetor, meio + 1, fim);
262 merge(vetor, comeco, meio, fim);
263 }
264 }
265 
266 //Algoritmo de ordenacao BucketSort
267 void BucketSort1(int* v, int maximo) {
268 int i, j = 0, z, continua = 1;
269 // Declara vetor de tamanho (max) e inicia todos
270 // os elementos com NULL
271 int* bucket = (int*)calloc(maximo, sizeof(int));
272 for (i = 0; i < max; i++)
273 bucket[i] = NULL;
274 // Coloca cada elemento do vetor nao ordenado
275 // em seu balde (bucket) correspondente
276 for (z = 0; z < tamanho; z++) {
277 for (i = 0; i <= max; i++)
278 if (i == v[z])
279 bucket[i] = v[z];
280 }
281 // Esvazia sequencialmente cada balde de volta ao vetor original
282 for (i = 0; i <= max; i++) {
283 if (bucket[i] != NULL) {
284 v[j] = bucket[i];
285 j++;
286 }
287 }
288 for (z = 0; z < tamanho; z++)
289 printf("%d ", v[z]);
290 printf("\n");
291 }
292 void bucketSort(int* v) {
293 int mat[10][10], aux[10], cont = 1, num, w = 0, i, j, aux1;
294 
295 
296 do {
297 for (i = 0; i < 10; i++) {
298 aux[i] = 0;
299 }//Zerando o vetor auxiliar.
300 for (i = 0; i < 10; i++) {//Setando a Matriz com valores -1
301 for (j = 0; j < 10; j++) {
302 mat[i][j] = -1;
303 }
304 }
305 for (i = 0; i < tamanho; i++) {
306 num = (v[i] / cont) % 10;//verificando o valor da esquerda para direita
307 aux1 = aux[num];
308 mat[num][aux1] = v[i];//colocando o valor na sua posicao na matriz
309 aux[num]++; //contador de colunas da matriz
310 }
311 
312 for (i = 0; i < 10; i++) {//volta com os valores da Matriz para o vetor
313 for (j = 0; j < tamanho; j++) {
314 if (mat[i][j] != -1) {
315 v[w] = mat[i][j];
316 printf("%d ", v[w]);
317 w++;
318 }
319 }
320 }
321 w = 0;
322 cont = cont * 10;
323 printf("\n %d", aux[0]);
324 } while (aux[0] < tamanho);//condicao :Enquanto vetor auxiliar < tamanho vetor
325 for (i = 0; i < tamanho; i++) {
326 printf("%d ", v[i]);
327 }
328 printf("\nfim");
329 } //
330 
331 void BucketSort(int* v, int tam) {
332 bucket b[num_bucket];
333 int i, j, k;
334 /* 1 */ //inicializa todos os "topo"
335 for (i = 0; i < num_bucket; i++)
336 b[i].topo = 0;
337 
338 /* 2 *///verifica em que balde o elemento deve ficar
339 for (i = 0; i < tam; i++) {
340 j = (num_bucket)-1;
341 while (1) {
342 if (j < 0)
343 break;
344 if (v[i] >= j * 10) {
345 b[j].balde[b[j].topo] = v[i];
346 (b[j].topo)++;
347 break;
348 }
349 j--;
350 }
351 }
352 
353 /* 3 *///ordena os baldes
354 for (i = 0; i < num_bucket; i++)
355 if (b[i].topo)
356 BubbleSort(b[i].balde, b[i].topo);
357 
358 i = 0;
359 /* 4 *///põe os elementos dos baldes de volta no vetor
360 for (j = 0; j < num_bucket; j++) {
361 for (k = 0; k < b[j].topo; k++) {
362 v[i] = b[j].balde[k];
363 i++;
364 }
365 }
366 }
367 
368 
369 void main() {
370 int i, n;
371 int vbs[tamanho];
372 int vqs[tamanho];
373 int vis[tamanho];
374 int vbis[tamanho];
375 int vss[tamanho];
376 int vhs[tamanho];
377 int vms[tamanho];
378 int vus[tamanho];
379 
380 //Cria numeros aleatorios para os vetores
381 for (i = 0; i < tamanho; i++) {
382 n = rand();
383 vbs[i] = n;
384 vqs[i] = n;
385 vis[i] = n;
386 vbis[i] = n;
387 vss[i] = n;
388 vhs[i] = n;
389 vms[i] = n;
390 vus[i] = n;
391 }
392 /*Ordenacao com BubbleSort*/
393 printf("=============================================\n");
394 printf("Ordenacao com BubbleSort: \n");
395 printf("=============================================\n");
396 printf("Vetor original: \n");
397 printf("---------------------------------------------\n");
398 for(i = 0; i < tamanho; i++){
399 printf("%d ", vbs[i]);
400 }
401 printf("\n---------------------------------------------\n");
402 printf("Passos da ordenacao: \n");
403 printf("---------------------------------------------\n");
404 BubbleSort(vbs, tamanho);
405 
406 
407 /*Ordenacao com QuickSort*/
408 printf("\n\n\n=============================================\n");
409 printf("Ordenacao com QuickSort: \n");
410 printf("=============================================\n");
411 printf("Vetor original: \n");
412 printf("---------------------------------------------\n");
413 for(i = 0; i < tamanho; i++){
414 printf("%d ", vqs[i]);
415 }
416 printf("\n---------------------------------------------\n");
417 printf("Passos da ordenacao: \n");
418 printf("---------------------------------------------\n");
419 QuickSort(vqs, tamanho);
420 
421 
422 /*Ordenacao com InsertionSort*/
423 printf("\n\n\n=============================================\n");
424 printf("Ordenacao com InsertionSort: \n");
425 printf("=============================================\n");
426 printf("Vetor original: \n");
427 printf("---------------------------------------------\n");
428 for(i = 0; i < tamanho; i++){
429 printf("%d ", vis[i]);
430 }
431 printf("\n---------------------------------------------\n");
432 printf("Passos da ordenacao: \n");
433 printf("---------------------------------------------\n");
434 InsertionSort(vis, tamanho);
435 
436 /*Ordenacao com InsertionSort*/
437 printf("\n\n\n=============================================\n");
438 printf("Ordenacao com Binary InsertionSort: \n");
439 printf("=============================================\n");
440 printf("Vetor original: \n");
441 printf("---------------------------------------------\n");
442 for(i = 0; i < tamanho; i++){
443 printf("%d ", vbis[i]);
444 }
445 printf("\n---------------------------------------------\n");
446 printf("Passos da ordenacao: \n");
447 printf("---------------------------------------------\n");
448 insertionBinSort(vbis, tamanho);
449 
450 
451 /*Ordenacao com SelectionSort*/
452 printf("\n\n\n=============================================\n");
453 printf("Ordenacao com SelectionSort: \n");
454 printf("=============================================\n");
455 printf("Vetor original: \n");
456 printf("---------------------------------------------\n");
457 for(i = 0; i < tamanho; i++){
458 printf("%d ", vss[i]);
459 }
460 printf("\n---------------------------------------------\n");
461 printf("Passos da ordenacao: \n");
462 printf("---------------------------------------------\n");
463 SelectionSort(vss, tamanho);
464 
465 
466 /*Ordenacao com HeapSort*/
467 printf("\n\n\n=============================================\n");
468 printf("Ordenacao com HeapSort: \n");
469 printf("=============================================\n");
470 printf("Vetor original: \n");
471 printf("---------------------------------------------\n");
472 for(i = 0; i < tamanho; i++){
473 printf("%d ", vhs[i]);
474 }
475 printf("\n---------------------------------------------\n");
476 printf("Passos da ordenacao: \n");
477 printf("---------------------------------------------\n");
478 HeapSort(vhs, tamanho);
479 
480 
481 /*Ordenacao com MergeSort*/
482 printf("\n\n\n=============================================\n");
483 printf("Ordenacao com MergeSort: \n");
484 printf("=============================================\n");
485 printf("Vetor original: \n");
486 printf("---------------------------------------------\n");
487 for(i = 0; i < tamanho; i++){
488 printf("%d ", vms[i]);
489 }
490 printf("\n---------------------------------------------\n");
491 printf("Passos da ordenacao: \n");
492 printf("---------------------------------------------\n");
493 mergeSort(vms, 0, tamanho-1);
494 
495 
496 ///*Ordenacao com BucketSort
497 printf("\n\n\n=============================================\n");
498 printf("Ordenacao com BucketSort: \n");
499 printf("=============================================\n");
500 printf("Vetor original: \n");
501 printf("---------------------------------------------\n");
502 for (i = 0; i < tamanho; i++) {
503 printf("%d ", vus[i]);
504 }
505 printf("\n---------------------------------------------\n");
506 printf("Passos da ordenacao: \n");
507 printf("---------------------------------------------\n");
508 // BucketSort(vus, tamanho);
509 BucketSort(vus,tamanho);
510 //*/
511 
512 
513 }
514 