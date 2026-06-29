-- Crie uma consulta que retorne as colunas CustomerId, FirstName, LastName e Address das pessoas consumidoras brasileiras
SELECT
CUSTOMERID AS id,
FIRSTNAME AS NOME,
LASTNAME AS SOBRENOME,
ADDRESS AS ENDEREÇO
FROM
CUSTOMERS
WHERE
COUNTRY LIKE 'Brazil';

-- Na consulta anterior, converta o sobrenome para letras maiúsculas
SELECT
CUSTOMERID AS id,
FIRSTNAME AS NOME,
UPPER(LASTNAME) AS SOBRENOME,
ADDRESS AS ENDEREÇO
FROM
CUSTOMERS
WHERE
COUNTRY LIKE 'Brazil';
-- Na consulta anterior, converta o nome para letras minúsculas
SELECT
CUSTOMERID AS id,
LOWER(FIRSTNAME) AS NOME,
UPPER(LASTNAME) AS SOBRENOME,
ADDRESS AS ENDEREÇO
FROM
CUSTOMERS
WHERE
COUNTRY LIKE 'Brazil';

-- Na consulta anterior, adicione uma coluna cujos os dados seja o resultado da concatenação das colunas de nome e sobrenome
SELECT
CUSTOMERID AS id,
LOWER(FIRSTNAME) AS NOME,
UPPER(LASTNAME) AS SOBRENOME,
FIRSTNAME || ' ' || LASTNAME AS NOME_COMPLETO,
ADDRESS AS ENDEREÇO
FROM
CUSTOMERS
WHERE
COUNTRY LIKE 'Brazil';

-- Na consulta anterior, substitua "Av." por "Avenida" na coluna endereço
SELECT
CUSTOMERID AS id,
LOWER(FIRSTNAME) AS NOME,
UPPER(LASTNAME) AS SOBRENOME,
FIRSTNAME || ' ' || LASTNAME AS NOME_COMPLETO,
REPLACE(ADDRESS, 'Av.','AVENIDA') AS ENDEREÇO
FROM
CUSTOMERS
WHERE
COUNTRY LIKE 'Brazil';

-- Na consulta anterior, utilize o símbolo de coringa para construir padrões textuais
SELECT DISTINCT
CUSTOMERID AS id,
SUBSTR(FIRSTNAME,1,3) AS APELIDO,
LOWER(FIRSTNAME) AS NOME,
UPPER(LASTNAME) AS SOBRENOME,
FIRSTNAME || ' ' || LASTNAME AS NOME_COMPLETO,
REPLACE(ADDRESS, 'Av.','AVENIDA') AS ENDEREÇO
FROM
CUSTOMERS
WHERE
COUNTRY LIKE 'Bra%';