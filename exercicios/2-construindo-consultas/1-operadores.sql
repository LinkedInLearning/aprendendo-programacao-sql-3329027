-- Construa uma consulta para a tabela "invoice_items" que retorne apenas as colunas InvoiceId, TrackId e UnitPrice.
SELECT
invoiceId,
trackId,
UnitPrice
from
invoice_items;
-- Inclua nessa consulta mais três colunas, cada uma como resultado de uma operação aritmética diferente
SELECT
invoiceId,
trackId,
UnitPrice,
unitPrice + 1.00,
unitPrice * 3,
unitPrice / 2
from
invoice_items;
-- Incremente essa consulta utilizando a cláusula WHERE, a qual restringirá o resultado apenas para linhas cujo o InvoiceId seja maior do que 20 e menor ou igual a 30
SELECT
invoiceId,
trackId,
UnitPrice,
unitPrice + 1.00,
unitPrice * 3,
unitPrice / 2
from
invoice_items
where
invoiceId >20 and invoiceId <= 30;
