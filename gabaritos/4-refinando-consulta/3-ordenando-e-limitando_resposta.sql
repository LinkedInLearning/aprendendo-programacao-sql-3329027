-- Desenvolva uma consulta para a tabela "customers" que retorne apenas 10 linhas
SELECT 
CustomerId as id,
FirstName as nome,
Country as pais
FROM
customers
LIMIT 10;

-- Usando a consulta anterior, ordene a coluna "Country" de forma crescente e "FirstName" de forma decrescente
SELECT 
CustomerId as id,
FirstName as nome,
Country as pais
FROM
customers
ORDER BY 
pais ASC,
nome DESC
LIMIT 10;

-- Continue usando a consulta anterior, dessa vez retorne 10 resultados, no entando ignore as 3 primeiras linhas
SELECT 
CustomerId as id,
FirstName as nome,
Country as pais
FROM
customers
ORDER BY 
pais ASC,
nome DESC
LIMIT 10 OFFSET 3;