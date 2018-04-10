x=-10:0.1:10;
plot(x,sin(x));
xlabel("-10<=x<=10");
ylabel("Y=sin(x)");
text(1,sin(1), "test point");
title("Sine Wave");
figure;
z=cos(x);
plot(x,z, 'b', 'LineWidth', 4);
hold on
plot(x,sin(x), 'r', 'LineWidth', 4);
legend('cosine', 'sine');
