
INSERT INTO users (name, email, password_hash, role)
VALUES
    ('Demo Seller', 'seller@example.com', 'DEMO_HASH', 'SELLER'),
    ('Demo Buyer', 'buyer@example.com', 'DEMO_HASH', 'BUYER');

INSERT INTO products (
    seller_id, name, description, price, stock, category
)
VALUES
    (1, 'Casual T-Shirt', 'Comfortable cotton T-shirt', 499, 20, 'Fashion'),
    (1, 'Shopping Bag', 'Reusable shopping bag', 199, 30, 'Accessories'),
    (1, 'Wireless Headphones', 'Everyday wireless headphones', 1499, 10, 'Electronics');