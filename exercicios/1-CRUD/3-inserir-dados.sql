-- Insira 3 classes salariais na tabela salario_classe
INSERT INTO salario_classe (id,nivel,salario)
VALUES
(001, 'Estagiária', 3500.00),
(002, 'Junior', 4500.00),
(003, 'Senior', 6500.00);
-- Insira 1 nova classe salarial, sem declarar o atributo id_salario
INSERT INTO salario_classe (nivel,salario)
VALUES
('Especialista', 8000.00),
('Especialista 2', 9000.00);

SELECT id FROM salario_classe;


-- Insira 1 nova classe salarial, sem declarar o atributo id_salario
