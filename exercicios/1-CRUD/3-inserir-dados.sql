-- Insira 3 classes salariais na tabela salario_classe


-- Insira 1 nova classe salarial, sem declarar o atributo id_salario

INSERT INTO  salario_classe(id_salario, salario, nivel)
VALUES
(1, 3500, 'estagiária'),
(2, 4700, ' iniciante - grade 1'),
(3, 5300, ' iniciante - grade 2');


INSERT INTO salario_classe(salario, nivel)
VALUES
(8500, 'gerencia'),
(10700, 'coordenação de área');
