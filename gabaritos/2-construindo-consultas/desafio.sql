-- Na consulta anterior, crie uma coluna apenas com as 3 primeiras letras do nome
SELECT DISTINCT
CustomerId as id,
SUBSTR(FirstName,1,3) as apelido,
LOWER(FirstName) as nome,
UPPER(LastName) as sobrenome,
LOWER(FirstName || ' ' || LastName) as nome_completo,
Address as endereco
FROM customers
WHERE 
Country LIKE 'Brazil';