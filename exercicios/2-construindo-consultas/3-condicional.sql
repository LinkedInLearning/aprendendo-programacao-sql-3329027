-- Escreva uma consulta que retorne o nome por extenso dos estados brasileiros
SELECT DISTINCT
COUNTRY,
STATE,
CASE
  WHEN STATE = 'SP' THEN 'SÃO PAULO'
  WHEN STATE = 'RJ' THEN 'RIO DE JANEIRO'
  ELSE 'NÃO IDENTIFICADO'
END AS 'estado'
FROM
CUSTOMERS
WHERE
COUNTRY LIKE 'Brazil';