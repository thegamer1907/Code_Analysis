install.packages(c("factoextra", "clustertend"))
dt = read.csv("E:\\Code_Analysis\\code_analysis\\visualize.stats\\out.csv")

df <- dt[,-15] 

random_df <- apply(df, 2, 
                   function(x){runif(length(x), min(x), (max(x)))})
random_df <- as.data.frame(random_df)

df <- dt.scaled <- scale(df)
random_df <- scale(random_df)

library("factoextra")
fviz_pca_ind(prcomp(df), title = "PCA Original data", 
             habillage = dt$Target,  palette = "jco",
             geom = "point", ggtheme = theme_classic(),
             legend = "bottom")
fviz_pca_ind(prcomp(random_df), title = "PCA - Random data", 
             geom = "point", ggtheme = theme_classic())

library(factoextra)
set.seed(123)

km.res1 <- kmeans(df, 2)
fviz_cluster(list(data = df, cluster = km.res1$cluster),
             ellipse.type = "norm", geom = "point", stand = FALSE,
             palette = "jco", ggtheme = theme_classic())

res <- get_clust_tendency(df, n = nrow(df)-1, graph = FALSE)
res$hopkins_stat

library(clustertend)
hopkins(df, n=nrow(df)-1, byrow = F, header = F)

install.packages("fclust")

library(fclust)
VAT(df)

install.packages("seriation")
library("seriation")
df_dist <- dist(df) 
dissplot(df_dist)
